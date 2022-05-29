#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int N = 5005;

ll n = 0 , x = 0 , kl = 0;
bool ku = false;

vector<ll> v , dp;

void init()
{
    v = vector<ll>(N , 0);
    dp = vector<ll>(N , 0);
    kl = 0;
    ku = false;
}

ll getMax(int k)
{
int index = 0;
ll sum = 0;
ll maxSum = INT_MIN;
for(int i = 0 ; i < k ; i ++)
{
    sum+=v[i];
}
maxSum = max(maxSum , sum);
for(int i = k ; i < n ; i ++)
{
    sum-=v[index++];
    sum+=v[i];
    maxSum = max(maxSum , sum);
}
return maxSum;
}
ll kadane()
{
    ll maxSum = INT_MIN , currSum = 0 , l = 0 , r = 0 , ll = 0;
    for(int i = 0 ; i < n ; i  ++)
    {
        currSum+=v[i];
        if(maxSum <= currSum)
        {
            ku = true;
            maxSum = currSum;
            l = ll;
            r = i;
        }
        if(currSum <= 0)
        {
            ll = i + 1;
            currSum = 0;
        }
        
    }
    kl = r - l + 1;
    return maxSum;
}
void solve()
{
    scanf("%lld %lld" , &n , &x);
    init();
    ll sum = 0;
    bool positive = true;
    for(int i = 0 ; i < n ; i ++)
    {
        scanf("%lld" , &v[i]);
        sum+=v[i];
        positive = v[i]>=0;
    }
    ll kad = kadane();
    ll z = 0;
    dp[0] = max(kad , z);
    for(ll i = 1 ; i <= n ; i ++)
    {
        if(positive || (i<=kl && ku))
        dp[i] = max(dp[i-1] , kad + i*x);
        else
        dp[i] = max(dp[i-1] , getMax(i) + i*x);
    }
    for(int i = 0 ; i <= n ; i ++)
    {
        printf("%d " , dp[i]);
    }
    printf("\n");
    
}

int main()
{
    int n = 0;
    scanf("%d" , &n);
    while(n--)
    {
        solve();
    }
}

