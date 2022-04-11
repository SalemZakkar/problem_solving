#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<ll> v;

int n = 0;

ll total = 0, ans = 0;

void init()
{
    ans = 0;
    v.resize(4);
}

void calc()
{
    int a = v[0];
    int b = v[1];
    int c = v[2];
    for(int i = 0 ; i <= 4000 ; i++)
    {
        for(int j = 0 ; j <= 4000 ; j ++)
        {
            int kt = n - (a*i + b*j);
            if(kt<0)
            {
                break;
            }
            double k = ((double)kt/(double)c);
            if(k == (int)k)
                ans = max(ans, (ll)(i+j+k));
        }
    }
}

void solve()
{
    scanf("%d", &n);
    init();
    for(int i = 0 ; i < 3 ; i ++)
    {
        scanf("%lld", &v[i]);
    }
    calc();
    printf("%lld\n", ans );

}

int main()
{

    solve();
}
