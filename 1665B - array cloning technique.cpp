#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve()
{

    int n = 0;

    scanf("%d", &n);

    vector<int> v(n,0);

    map<int,int> m;

    for(int i = 0 ; i < n ; i ++)
    {
        scanf("%d", &v[i]);
        m[v[i]]++;
    }
    ll p = -1e18, f = -1e18;

    for(auto it : m)
    {
        if(it.second <= f) continue;
        p = it.first;
        f = it.second;
    }
    ll rem = n - f;
    ll ans = 0;
    while(rem > 0)
    {
        ans++;
        if(f < rem)
        {
            rem -= f;
            ans += f;
            f*=2;
        }
        else{
            ans+=rem;
            break;
        }
    }
    printf("%lld\n" , ans);


}

int main()
{
    int n = 0;
    scanf("%d", &n);
    while(n--)
        solve();
}
