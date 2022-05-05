#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n = 0;
    scanf("%d" , &n);
    long long ans = ((n)*(n+1)) / 2;
    double powers = 1;
    double pp = 2;
    long long temp = 0;
    while(temp <= n)
    {
        temp = pow(pp , powers);
       // cout<<temp<<endl;
        if(temp <= n)
        ans = ans - temp - temp;
        powers++;

    }
    printf("%lld\n" , ans - 2);
}

int main()
{

    int n = 0;
    scanf("%d" , &n);
    while(n--)
    {
        solve();
    }

}