//https://cses.fi/problemset/task/1633

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define mod 1000000007;

void getans(int n)
{

    vector<ll> sum(n+1 , 0);
    sum[0] = 1;
    for(int i = 1 ; i <= n ; i ++)
    {
        for(int j = 1 ; j <= 6 ; j ++)
        {
            if(j > i)
            {
                break;
            }
            sum[i] = (sum[i] + sum[i-j]) % mod;
        }
    }

    printf("%lld\n" , sum[n]);

}

void solve()
{
    int n = 0;
    scanf("%d" , &n);
    getans(n);

}

int main()

{
   solve();
}
