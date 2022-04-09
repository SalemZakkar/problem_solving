#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n = 0;

ll ans = 0;

vector<int> v[3];

vector<ll> height[3];

void init()
{
    for(int i = 0 ; i < 2 ; i ++)
    {
        v[i].resize(n+5, 0);
        height[i].resize(n+5, 0);
    }
}

void getAns()
{
    for(int i = 1 ; i <= n ; i ++)
    {
        height[0][i] = max(height[0][i-1], height[1][i-1] + v[0][i]);
        height[1][i] = max(height[1][i-1], height[0][i-1] + v[1][i]);
    }
    ans = max(height[0][n], height[1][n]);
}

void solve()
{
    scanf("%d", &n);

    init();

    for(int i = 1 ; i <= n ; i ++)
    {
        scanf("%d", &v[0][i]);
    }
    for(int i = 1 ; i <= n ; i ++)
    {
        scanf("%d", &v[1][i]);
    }

    getAns();

    printf("%lld\n", ans);


}

int main()
{
    solve();
}
