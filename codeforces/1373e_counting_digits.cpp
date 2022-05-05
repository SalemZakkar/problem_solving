#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n = 0 , k = 0;
void init()
{
    n = 0;
    k = 0;
}

int sum(string &s)
{
    int sum = 0;
    for(int i = 0 ; i < s.length() ; i ++)
    {
        sum += s[i] - '0';
    }
    return sum;
}

int good(ll mid)
{
    string s;
    ll cnt = 0;
    for(int i = 0 ; i <= k ; i ++)
    {
         mid+=i;
         s = to_string(mid);
         cnt+=sum(s);
         cout<<mid<<" "<<cnt<<endl;
    }
    return cnt;
}

void solve()
{
    init();
    scanf("%d %d" , &n , &k);
    ll l = -1 , r = 1e12;
    // while(r>l+1)
    // {
    //     ll m = (l+r)/2;
    //     if(good(m))
    //     {
    //         r = m;
    //     }
    //     else
    //     {
    //         l = m;
    //     }
    // }

    cout<<good(3)<<endl;
    

}

int main()
{
    int t = 0;
    scanf("%d" , &t);
    while(t--)
    {
        solve();
    }
}