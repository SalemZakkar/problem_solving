/*
###########################
solved by : Salem Zakkar
url : https://codeforces.com/contest/1680/problem/C
codeforces handle: salemzakkar
###########################
 */

#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int n = 0, zero = 0, one = 0;

vector<int> pre, suf;

string s;

void init()
{
    pre.clear();
    suf.clear();

}

bool good(int mid)
{
    for(int i = 0 ; i<=mid ; i ++)
    {
        int left = zero;
        left -= pre[i];
        left -= suf[mid-i];
        if(left<=mid)
        {
            return true;
        }
    }
    return false;
}

void setPrefixAndSuffix()
{
    int cnt = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        if(s[i] == '1')
        {
            pre.push_back(cnt);
        }
        else
        {
            cnt++;
        }
    }
    cnt = 0;
    for(int i = n-1 ; i >= 0 ; i --)
    {
        if(s[i] == '1')
        {
            suf.push_back(cnt);
        }
        else
        {
            cnt++;
        }
    }
}

void solve()
{
    init();
    cin>>s;
    n = s.length();
    setPrefixAndSuffix();
    zero = count(s.begin(), s.end(), '0');
    one = count(s.begin(), s.end(), '1');
    int l = -1, r = one;
    while(r>l+1)
    {
        int mid = (l+r) / 2;
        if(good(mid))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    printf("%d\n", r);
}

int main()
{
    int t = 0;
    scanf("%d", &t);
    while(t--)
        solve();
}
