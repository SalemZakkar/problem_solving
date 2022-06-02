/*
###########################
solved by : Salem Zakkar
url : https://codeforces.com/contest/1680/problem/A
codeforces handle: salemzakkar
########################### 
 */ 

#include<bits/stdc++.h>

using namespace std;

using ll = long long;

void init()
{
}

void solve()
{
    int l1 , r1 , l2 , r2;
    scanf("%d %d %d %d" , &l1 , &r1 , &l2 , &r2);
    int ans = max(l1 , l2);
    int add = 0;
    if(ans>r1)
    {
        add+=l1;
    }
    if(ans>r2)
    {
        add+=l2;
    }
    printf("%d\n" , ans + add);
}

int main()
{
int t = 0;
scanf("%d" , &t);
while(t--)
solve();
}