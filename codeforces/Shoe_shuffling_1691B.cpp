/*
###########################
solved by : Salem Zakkar
url : https://codeforces.com/contest/1691/problem/B
codeforces handle: salemzakkar
########################### 
 */ 

#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int n = 0;

vector<int> v , r;

map<int,int> m;

void init()
{
    v = vector<int>(n,0);
    r.clear();
    m.clear();
}

void solve()
{
    scanf("%d" , &n);
    init();
    for(int i = 0 ; i < n ; i ++)
    {
        scanf("%d" , &v[i]);
        m[v[i]]++;
    }
    for(auto &x : m)
    {
        if(x.second == 1)
        {
            printf("-1\n");
            return;
        }
    }
    for(int i = 1; i <= n ; i++)
    {
        r.push_back(i);
    }
    for(int i = 1 ; i < n ; i ++)
    {
        if(v[i] == v[i-1])
        {
            swap(r[i] , r[i-1]);
        }
    }
    for(int i = 0 ; i < n ; i ++)
    {
        printf("%d " , r[i]);
    }
    printf("\n");

}

int main()
{
int t = 0;
scanf("%d" , &t);
while(t--)
solve();
}