#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const ll mod = 1e9 + 7;

const int N = 1e5+5;

int t = 0 , k = 0;
int a = 0 , b = 0;
vector<ll> dp(N , 0) , ans(N,0);

void startDP()
{
    dp[0] = 1;
    for(int i = 1 ; i < N ; i ++)
    {
        dp[i] = dp[i-1];
        if(i>=k)
        {
            dp[i] += (dp[i-k] % mod);
        }
    }
    ans[0] = dp[0];
    for(int i = 1 ; i < N ; i ++)
    {
        ans[i] = (ans[i-1] + dp[i]) % mod;
    }
}

void getQueries()
{
    while(t--)
    {
        scanf("%d %d" , &a , &b);
        ll s = ans[b] - ans[a-1] + mod;
        s%=mod;
        printf("%lld\n" , s);
    }
}

void solve()
{
    scanf("%d %d" , &t , &k);
    startDP();
    getQueries();

}

int main()
{
    solve();
}
