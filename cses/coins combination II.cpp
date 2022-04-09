//https://cses.fi/problemset/task/1636

#include <bits/stdc++.h>

#define mod 1000000007

using namespace std;

using ll = long long;

void getAns(int x , vector<ll> &coins)
{

    vector<ll> dp (x + 1 , 0);
    dp[0] = 1;
    sort(coins.begin() , coins.end());
    for(int i = 0 ; i < coins.size() ; i ++)
    {
        for(int j = 0 ; j <= x ; j ++)
        {
            if(j - coins[i] >= 0)
            dp[j] += dp[j - coins[i]];
            dp[j] %= mod;
        }
    }
    printf("%lld\n" , dp[x]);

}

void solve()
{

    int n = 0 , x = 0;
    scanf("%d %d" , &n , &x);
    vector<ll> coins(n,0);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d" , &coins[i]);
    }
    getAns(x , coins);

}

int main()
{
    solve();
}
