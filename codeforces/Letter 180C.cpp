#include <bits/stdc++.h>

using namespace std;

vector<int> l , u;

int ans = 0;

void countLower(int i , string &s)
{
    l[i] = l[i-1];
    if(s[i-1] >='a' && s[i-1] <='z')
    {
        l[i]++;
    }
}
void countUpper(int i , string &s)
{
    u[i] = u[i+1];
    if(s[i+1] >='A' && s[i+1] <='Z')
    {
        u[i]++;
    }
}

void init(int n)
{
    l.resize(n+5 , 0);
    u.resize(n+5 , 0);
    ans = n;
}

void getAns(int n , string &s){
int ans = n;
for(int i = 0 ; i < n ; i ++)
{
    ans = min(ans , l[i] + u[i]);
}
printf("%d\n" , ans);
}

void solve()
{

    string s;
    cin >> s;
    int n = s.length();
    init(n);
    for(int i = 1 ; i < n ; i ++)
    {
        countLower(i , s);
    }
    for(int i = n-2 ; i >= 0 ; i --)
    {
        countUpper(i , s);
    }
    getAns(n , s);


}

int main()
{

    solve();

}
