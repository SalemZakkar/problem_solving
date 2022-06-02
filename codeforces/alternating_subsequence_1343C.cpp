/*
##########################################################
url: https://codeforces.com/problemset/problem/1343/C
solved by : salemzakkar
handle on codeforces: salemzakkar
##########################################################
*/
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll sum = 0;

int n = 0;

vector<ll> v;

void setSum()
{
    ll ma = v[0];
    for(int i = 1 ; i < n ; i++ )
    {
       if(ma * v[i] > 0)
       {
           ma = max(ma , v[i]);
       }
       else
       {
           sum+=ma;
           ma = v[i];
       }
    }
    sum+=ma;
}


void solve()
{
    sum = 0;
    scanf("%d" , &n);
    v = vector<ll>(n , 0);
    for(int i = 0 ; i < n ; i ++)
    {
        scanf("%lld" , &v[i]);
    }
    setSum();
    printf("%lld\n" , sum);
}

int main()
{
    int t = 0;
    scanf("%d" , &t);
    while(t--)
    {
        solve();
    }
}