#include <bits/stdc++.h>

using namespace std;

void getans(vector<int> &v , int n)
{
    if(n == 1)
    {
        printf("NO\n");
        return;
    }

    sort(v.rbegin() , v.rend());

    int one = v[0] , two = 0;

    for(int i = 1 ; i < n ; i ++)
    {
        if(one < two)
        {
            one += v[i];
        }
        else if(one > two)
        {
            two += v[i];
        }
        else{
            one += v[i];
        }


    }
    bool ans = (one == two);
    printf((ans ? "YES\n" : "NO\n"));


}

void solve()
{

    int n = 0;
    scanf("%d", &n);
    vector<int> v(n, 0);
    for(int i = 0 ; i < n ; i ++)
    {

        scanf("%d", &v[i]);

    }

    getans(v , n);


}

int main()
{
    int n = 0;
    scanf("%d", &n);
    while(n--)
        solve();
}
