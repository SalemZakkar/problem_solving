#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const ll mod = 1e9 + 7;

const int N = 1e5+5;

int t = 0 , k = 0;

ll dp[N];

void startDP()
{
    dp[0] = 0;
    int s = 0;
    while(s<k)
    {
        dp[s++] = 1;
    }
    dp[k] = 2;
    for(int i = k+1 ; i < N ; i ++)
    {
        dp[i] = (dp[i - 1] % mod + dp[i - k] % mod) % mod;
    }
    for(int i = 1 ; i < N ; i ++)
    {
        dp[i] = (dp[i] % mod + dp[i-1] % mod) % mod;
    }
}

void solve()
{
   scanf("%d %d" , &t , &k);
   memset(dp , 0 , sizeof(dp));
   startDP();
   for(int i = 0 ; i < t ; i ++)
   {
       int l = 0 , r = 0;
       scanf("%d %d" , &l , & r);
       ll ans = (dp[r] - dp[l-1]) % mod;
       if(ans<0)
       {
           ans+=mod;
       }
       printf("%lld\n" , ans);

   }
}

int main()
{
    solve();
}
