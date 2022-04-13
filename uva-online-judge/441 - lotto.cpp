#include <bits/stdc++.h>

using namespace std;

int n = 0;

vector<int> v , temp;

set<vector<int>> s;

void print()
{
    for(auto &v : s)
    {
        for(int i = 0 ; i < v.size() ; i ++)
        {
            printf("%d%c" , v[i] , (i==v.size()-1 ? '\n' : ' '));
        }
    }

}

void backtrack(int pos)
{
    if(temp.size() == 6)
    {
        s.insert(temp);
        return;
    }
    for(int i = pos ; i < n ; i ++)
    {
        temp.push_back(v[i]);
        backtrack(i+1);
        temp.pop_back();
    }


}

void solve()
{
    v.clear();
    temp.clear();
    v = vector<int>(n+5 , 0);
    s.clear();
    for(int i = 0 ; i < n ; i ++)
    {
        scanf("%d" , &v[i]);
    }
    backtrack(0);
    print();



}

int main()
{
    int cnt=0;
    while(true)
    {

        scanf("%d" , &n);
        if(n==0)
            break;
        cnt++;
        if(cnt>1)
            printf("\n");
        solve();

    }

}
