//https://cses.fi/problemset/task/1158

#include <bits/stdc++.h>

#define mod 1000000007

using namespace std;

int n = 0 , m = 0;

vector<pair<int,int>> v;

vector<vector<int>> dp;

void init()
{
    dp.resize(n+5 , vector<int>(m+5 , 0));


}

int knapsac()
{

    init();
    for(int i = 1 ; i <= n ; i ++)
    {
        for(int j = 1 ; j <= m ; j ++)
        {
            dp[i][j] = dp[i-1][j];
            if(j>=v[i].second)
            dp[i][j] = max(v[i].first + dp[i-1][j-v[i].second] , dp[i-1][j]);
           // cout<<dp[i][j]<<" ";
        }
       // cout<<endl;
    }
    return dp[n][m];


}

void solve()
{

   scanf("%d %d" , &n , &m);
   v.resize(n+5);
   for(int i = 1 ; i <= n ; i ++)
   {
       scanf("%d" , &v[i].second);
   }
   for(int i = 1 ; i <= n ; i ++)
   {
       scanf("%d" , &v[i].first);
   }
   int ans = knapsac();
   cout<<ans<<endl;

}

int main()
{

    solve();

}
