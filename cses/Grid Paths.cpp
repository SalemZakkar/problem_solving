//https://cses.fi/problemset/task/1638

#include <bits/stdc++.h>

#define mod 1000000007

using namespace std;

using ll = long long;

void init(int n, vector<vector<ll>> &dp)
{
    dp.resize(n+5);
    for(int i = 0 ; i < n ; i ++)
    {
        dp[i].resize(n+5, 0);
    }
}

ll pathCount( vector<string> &graph, int n)
{
    vector<vector<ll>> dp;
    init(n, dp);
    if(graph[0][0] == '.')
    {
        dp[0][0] = 1;
    }
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j < n ; j ++)
        {
            if(i==0 && j == 0)
            {
                continue;
            }
            if(graph[i][j] != '.')
            {
                dp[i][j] = 0;
                continue;
            }
            if(i-1 >= 0)
            {
                dp[i][j] += dp[i-1][j];
                dp[i][j] %= mod;
            }
            if(j-1 >= 0)
            {
                dp[i][j] += dp[i][j-1];
                dp[i][j] %= mod;
            }
        }

    }
    return dp[n-1][n-1];
}

void solve()
{

    int n = 0;

    cin >> n;

    vector<string> v(n+5);

    for(int i = 0 ; i < n ; i ++)
    {
        cin >> v[i];
    }

    ll ans = pathCount( v, n);

    cout<<ans<<endl;



}

int main()
{

    solve();

}
