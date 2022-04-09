//https://cses.fi/problemset/task/1637

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<ll> dp(1e6+5, 0);

ll getOptimal(int n)
{

    string k = to_string(n);

    ll optimal = LLONG_MAX;

    for(int i = 0 ; i < k.length() ; i ++)
    {

        int m = n - (k[i] - '0');
        if(k[i] == '0' || dp[m] == 0)
        {
            continue;
        }
        optimal = min(optimal , dp[m]);

    }

    return optimal;

}

void getAns(int n)
{



    for(int i = 1 ; i <= n ; i ++)
    {
        if(i<10)
        {
            dp[i] = 1;
            continue;
        }
       // cout<<i<<endl;
       // cout<<getOptimal(i)<<endl;
        dp[i] += getOptimal(i ) + 1;

    }
    printf("%lld\n", dp[n]);

}

void solve()
{

    int n = 0;

    scanf("%d", &n);
    dp[0] = 1;
    getAns(n);

}

int main()
{
    solve();

}
