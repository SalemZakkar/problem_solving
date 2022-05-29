#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

using ll = long long;

ll dp[N][5];

void solve()
{
    int n = 0, p = 0, q = 0, r = 0;
    scanf("%d %d %d %d", &n, &p, &q, &r);
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    dp[0][0] = 1ll * p * v[0];
    for(int i = 1 ; i < n ; i ++)
    {
        dp[i][0] = max(dp[i-1][0] , 1ll * p * v[i]);
    }
    dp[0][1] = dp[0][0] + 1ll * q * v[0];
    for(int i = 1 ; i < n ; i ++)
    {
        dp[i][1] = max(dp[i-1][1] , dp[i][0] +  1ll * q * v[i]);
    }
    dp[0][2] = dp[0][1] + 1ll * r * v[0];
    for(int i = 1 ; i < n ; i ++)
    {
        dp[i][2] = max(dp[i-1][2] , dp[i][1] +  1ll * r * v[i]);
    }
    printf("%lld\n" , dp[n-1][2]);
}

int main()
{
    solve();
}