#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<ll> v;

int n = 0;

ll total = 0 , ans = 0;

void init()
{
    ans = 0;
    v.resize(n+5);
}

void get(int i)
{
    total += v[i];
    if((ll)i + v[i] <= n)
    {
        total += v[(ll)i+v[i]];
    }
    ans = max(total , ans);
    v[i] = total;
    total = 0;
}

void solve()
{
    scanf("%d" , &n);
    init();
    for(int i = 1 ; i <= n ; i ++)
    {
        scanf("%lld" , &v[i]);
    }
    for(int i = n ; i > 0 ; i --)
    {
        get(i);
    }
    printf("%lld\n" , ans);
}

int main()
{
    int n = 0;
    scanf("%d" , &n);
    while(n--)
    solve();
}
