#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int ans = 0;
    while(n!=m)
    {
        if(m>n)
        {
            if(m%2==0)
            {
                m/=2;
                ans++;
            }
            else
            {
                m++;
                ans++;
            }
        }
        else{
            m++;
            ans++;
        }
    }
    printf("%d\n" , ans);



}

int main()

{
    solve();
}
