//https://cses.fi/problemset/task/1634

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void getAns(int x , vector<ll> &coins)
{

    vector<ll> dp (x + 1 , INT_MAX);
    dp[0] = 0;
    for(int i =1 ; i <= x ; i++)
    {
        for(int j = 0 ; j < coins.size() ; j++)
        {
            if(i >= coins[j])
            dp[i] = min(dp[i] , dp[i - coins[j]] + 1);
        }
        for(int i = 1 ; i <= x ; i ++)
        {
            cout<<dp[i] << " ";
        }
        cout<<endl;
    }
    printf("%lld\n" , (dp[x] >= INT_MAX ? -1 : dp[x]));

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
