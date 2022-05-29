#include <bits/stdc++.h>

using namespace std;

const int N = 200;
int n = 0;
vector<int> v;
int dp[N][5];
void init()
{
    v = vector<int>(N, 0);
    for(int i = 0 ; i < N ; i ++)
    {
        dp[i][0] = dp[i][1] = dp[i][2] = 1000;
    }
}

int dpp()
{
    dp[0][0] = 1;
    if (v[0] == 1 || v[0] == 3)
    {
        dp[0][1] = 0;
    }
    if (v[0] == 2 || v[0] == 3)
    {
        dp[0][2] = 0;
    }
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = 1 + min(dp[i - 1][0], min(dp[i - 1][1], dp[i - 1][2]));
     //   cout<<dp[i][0]<<endl;
        if (v[i] == 1 || v[i] == 3)
        {
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
          //  cout<<dp[i][1]<<endl;
        }
        if (v[i] == 2 || v[i] == 3)
        {
            dp[i][2] = min(dp[i-1][0] , dp[i-1][1]);
            //cout<<dp[i][2]<<endl;
        }
    }
    return min(dp[n-1][0] , min(dp[n-1][1] , dp[n-1][2]));
}

void solve()
{
    scanf("%d", &n);
    init();
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    cout<<dpp()<<endl;
}

int main()
{
    solve();
}