/*
###########################
solved by : Salem Zakkar
url : https://codeforces.com/problemset/gymProblem/102152/L
codeforces handle: salemzakkar
###########################
 */

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int N = 1e3 + 5, M = 1e3 + 5;

int n, m, h, w , ans;

int arr[N][M], les[N][M], more[N][M];

void initPref()
{
    memset(les, 0, sizeof(les));
    memset(more, 0, sizeof(more));
}

void setPrefs(int mid)
{
    for (int i = 1; i <= n; i++)
    {
        int s = 0, b = 0;
        for (int j = 1; j <= m; j++)
        {
            les[i][j] = s + les[i - 1][j];
            if (arr[i][j] < mid)
            {
                les[i][j]++;
                s++;
            }
            more[i][j] = b + more[i - 1][j];
            if (arr[i][j] > mid)
            {
                more[i][j]++;
                b++;
            }
        }
    }
}

bool good(int mid)
{
    initPref();
    setPrefs(mid);
    bool ok = false;
    for (int i = 1; i <= n - h + 1; i++)
    {
        for (int j = 1; j <= m - w + 1; j++)
        {
            int s = les[i + h - 1][j + w - 1] - les[i + h - 1][j - 1] - les[i - 1][j + w - 1] + les[i - 1][j - 1];
            int b = more[i + h - 1][j + w - 1] - more[i + h - 1][j - 1] - more[i - 1][j + w - 1] + more[i - 1][j - 1];
            if (s >= b){
                ok = true;
            }
            int vol = n * m;
            if (s==b && s<=vol/2 && b <= vol / 2)
            {
                ans = min(ans , mid);
            }
        }
    }
    return ok;
}

void solve()
{
    scanf("%d %d %d %d" , &n , &m , &h , &w);
    for(int i = 1 ; i <= n ; i ++)
    {
        for(int j = 1 ; j <= m ; j ++)
        {
            scanf("%d" , &arr[i][j]);
        }
    }
    int l = -1 , r = n*m;
    ans = r;
    while(r>l+1)
    {
        int mid = (l+r) / 2;
        if(good(mid))
        {
            r = mid;
        }
        else{
            l = mid;
        }
    }

    printf("%d\n" , ans);
}

int main()
{
    solve();
}