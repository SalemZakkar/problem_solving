#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n = 0, r = 0;
ll a = 0;
vector<int> v, temp, ans;
void init()
{
    v.clear();
    v.resize(n+5, 0);
    temp.clear();
    ans.clear();
    a = 0;
}

void backtrack(int pos, ll sum)
{
    if(sum > r) return;

    if(pos == n)
    {
            if(a < sum)
            {
                a = sum;
                ans = temp;
            }

        return;
    }
        temp.push_back(v[pos]);
        backtrack(pos+1, sum+v[pos]);
        temp.pop_back();
        backtrack(pos+1 , sum);

}

void print()
{
    for(auto i : ans)
    {
        printf("%d ", i);
    }
    printf("sum:%d\n", a);
}

void solve()
{
    init();
    for(int i = 0 ; i < n ; i ++)
    {
        scanf("%d", &v[i]);
    }
    backtrack(0, 0);
    print();

}
int main()
{
    int cnt = 0;
    while(~scanf("%d" , &r))
    {
        scanf("%d" , &n);
        solve();
    }

}
