#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n = 0 , ans = 0;

vector<int> s , p;

void init()
{
    ans = INT_MAX;
s.resize(n+5 , 0);
p.resize(n+5 , 0);
}

void getAns(int i)
{

    int cost = p[i];
    int b = -1;
    for(int j = 0 ; j < i ; j ++)
    {
        if(s[j] >= s[i])
            continue;
        if(b == -1 || p[j] < p[b] )
            b = j;
    }
    if(b!=-1){
    cost+=p[b];
    b = -1;
    for(int j = i + 1 ; j < n ; j ++)
    {
        if(s[j] <= s[i])
            continue;
        if(b ==-1 || p[j] < p[b])
            b = j;
    }
    if(b!=-1)
    {
        cost+=p[b];
        ans = min(ans , cost);
    }
    }
}

void solve()
{
 scanf("%d" , &n);
 init();
 for(int i = 0 ; i < n ; i ++)
 {
     scanf("%d" , &s[i]);
 }
 for(int i = 0 ; i < n ; i ++)
 {
     scanf("%d" , &p[i]);
 }
 for(int i = 0 ; i < n ; i ++)
 {
    getAns(i);
 }
 printf("%d\n" , (ans == INT_MAX ? -1 : ans));

}

int main()
{
    solve();
}
