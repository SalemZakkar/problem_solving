#include <bits/stdc++.h>

using namespace std;

int findcost(int l , int r , string &str , char c)
{
    if(l==r)
    {
        return !(str[l] == c);
    }
    int mid = (l+r) / 2;
    return findcost(l , mid , str ,c) + findcost(mid+1 , r , str , c);
}
int getAns(int l , int r , string &str , char c )
{
    if(l == r)
    {
        return !(str[l] == c);
    }
    int mid = (l+r) / 2;
    int ans1 = findcost(l , mid , str , c) + getAns(mid+1 , r , str , c+1 );
    int ans2 = findcost(mid+1 , r , str , c ) + getAns(l , mid , str , c+1);
    return min(ans1 , ans2);
}

void solve()
{
    int n = 0;
    char c[140000];
    scanf("%d\n%s" , &n , c);
    string s = c;
    int ans = getAns(0 , n - 1 , s , 'a');
    printf("%d\n" , ans);
}

int main()
{
    int t = 0 ;
    scanf("%d" , &t);
    while(t--)
    {
        solve();
    }
}
