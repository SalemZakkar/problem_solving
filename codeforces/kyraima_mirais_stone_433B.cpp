/*
###########################
solved by : Salem Zakkar
url : https://codeforces.com/problemset/problem/1352/C
handle: salemzakkar
########################### 
 */ 

#include<bits/stdc++.h>

using namespace std;

using ll = long long;

vector<ll> v , sum;

vector<vector<ll>> arr;

int n = 0 , t = 0 , l = 0 , r = 0 , q = 0;

void init()
{
   sum = vector<ll>(n , 0);
   v = vector<ll>(n , 0);
}

void setSums()
{
    sum = v;
    sort(sum.begin() , sum.end());

    for(int i = 1 ; i < n ; i ++)
    {
        v[i] = v[i] + v[i-1];
        sum[i] = sum[i] + sum[i-1];
    }
    arr.push_back(v);
    arr.push_back(sum);
}

void getQueries(int t , int l , int r)
{
   t--;l--;r--;
   int flag = l>0;
  // cout<<flag<<endl;
   printf("%lld\n" , arr[t][r] - arr[t][(l-flag)] * flag);
}

void solve()
{
    scanf("%d" , &n);
    init();
    for(int i = 0 ; i < n ; i ++)
    {
        scanf("%lld" , &v[i]);
    }
    setSums();
    scanf("%d" , &q);
    while(q--)
    {
        scanf("%d %d %d" , &t , &l , &r);
        getQueries(t , l , r);
    }


}

int main()
{
solve();
}