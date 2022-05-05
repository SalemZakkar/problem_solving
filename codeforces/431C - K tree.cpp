#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = 1e9 + 7;

int n , k, d;
vector<vector<ll>> dp;

ll dyp(ll sum , bool s)
{
    if(sum == n && s)
    {
        return 1;
    }
    if(sum>=n)
        return 0;
    if(dp[sum][s] != -1)
    {
        return dp[sum][s];
    }
    ll ans = 0;
    for(int i = 1 ; i <= k ; i ++)
    {
        ans = ((ans % mod) + dyp(sum + i , s || i >= d) % mod)%mod;
    }
    dp[sum][s] = ans;
    return dp[sum][s];
}

void solve()
{
    scanf("%d %d %d" , &n , &k , &d);
    dp.resize(n+5 , vector<ll>(2 , -1));
    ll ans = dyp(0 , 0);
    for(int i = 0 ; i<=n ; i ++)
    {
        for(int j = 0 ; j < 2 ; j ++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    printf("%lld\n" , ans );
}

int main()
{
    solve();
}
