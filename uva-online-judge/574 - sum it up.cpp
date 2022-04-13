#include <bits/stdc++.h>

using namespace std;

int n = 0, r = 0;

set<vector<int>> s;
vector<int> v, temp;
int sum = 0;
void print()
{
    printf("Sums of %d:\n", r);
    if(s.size() == 0)
    {
        printf("NONE\n");
        return;
    }
    auto it = s.end();
    --it;
    while(true)
    {
        vector<int> ans = *it;
        int j = ans.size();
        for(int i = 0 ; i < j ; i ++)
        {
            printf("%d%c" , ans[i] , (i==j-1 ? '\n' : '+'));
        }
        if(it == s.begin())
        {
            break;
        }
        --it;
    }
}

void init()
{
    v.clear();
    v = vector<int>(n+5, 0);
    s.clear();
    temp.clear();
    sum = 0;
}

void backtrack(int pos, int sum)
{
    if(sum == r)
    {
        s.insert(temp);
        return;
    }
    if(pos == n)
    {
        return;
    }
    for(int i = pos ; i < n ; i ++)
    {
        temp.push_back(v[i]);
        sum+=v[i];
        backtrack(i+1,sum);
        sum-=v[i];
        temp.pop_back();
    }
}

void solve()
{
    init();
    for(int i = 0 ; i < n ; i ++)
    {
        scanf("%d", &v[i]);
    }
    backtrack(0,0);
    print();

}

int main()
{
    int cnt = 0;
    while(true)
    {
        scanf("%d %d", &r, &n);
        if(n==0 && r == 0) break;
        if(cnt > 1) printf("\n");
        solve();
    }



}
