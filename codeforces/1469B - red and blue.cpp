#include <bits/stdc++.h>

using namespace std;

vector<int> v[2];

void init(int n)
{

    v[0] = vector<int>(n+5,0);
    v[1] = vector<int>(n+5,0);
}

int maximum(int n, int f)
{

    int maxi = INT_MIN, curr = 0;
    for(int i = 0 ; i < n ; i ++)
    {
        curr+=v[f][i];
        maxi = max(maxi, curr);
        curr = max(curr, 0);
    }
    return maxi = max(maxi , 0);
}

int getAns(int n , int m)
{
    //cout<<maximum(n , 0) << " "<<maximum(m , 1)<<endl;
    return maximum(n, 0) + maximum(m, 1);

}

void solve()
{

    int n = 0;
    scanf("%d", &n);
    init(n);
    for(int i = 0 ; i < n ; i ++)
    {
        scanf("%d", &v[0][i]);
    }
    int m = 0;
    scanf("%d" , &m);
    for(int i = 0 ; i < m ; i ++)
    {
        scanf("%d" , &v[1][i]);
    }
    int ans = getAns(n , m);
    printf("%d\n", ans);

}

int main()
{

    int n = 0;
    scanf("%d", &n);
    while(n--)
    {
        solve();
    }

}
