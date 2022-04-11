#include <bits/stdc++.h>

using namespace std;

//

using ll = long long;

void solve()
{
    int n = 0;
    scanf("%d" , &n);
    vector<ll> freq(1e5+5,0) , ans(1e5+5,0);
    int maxi = -1;
    for(int i = 0 ; i < n ; i ++)
    {
        int x = 0;
        scanf("%d" , &x);
        freq[x]++;
        maxi = max(maxi , x);
    }
    ans[0] = 0;
    ans[1] = freq[1];
    for(int i = 2 ; i <= 1e5 ; i ++)
    {
        ans[i] = max(ans[i-1] , ans[i-2] + (freq[i] * i));
    }
    printf("%lld\n" , ans[maxi]);

}

int main()
{
    int n = 0;
    solve();
}
