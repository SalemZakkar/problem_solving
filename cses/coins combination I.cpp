//https://cses.fi/problemset/task/1635

#include <bits/stdc++.h>

#define mod 1000000007

using namespace std;

using ll = long long;

void getAns(int x , vector<ll> &coins)
{

    vector<ll> dp (x + 1 , 0);
    dp[0] = 1;
    sort(coins.begin() , coins.end());
    for(int i =1 ; i <= x ; i++)
    {
        for(int j = 0 ; j < coins.size() ; j++)
        {
            if(coins[j] > i)
            {
                break;
            }
            dp[i] = (dp[i] + dp[i-coins[j]] ) % mod;
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
