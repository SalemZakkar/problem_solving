#include <bits/stdc++.h>

using namespace std;

long long getFib(int n)
{

     double l = 1;
     for(int i = 0 ; i < n ; i ++)
     {
         l *= (1+sqrt(5));
     }
     double r = 1;
     for(int i = 0 ; i < n ; i ++)
     {
         r *= (1-sqrt(5));
     }
     return (l-r) /( pow(2,n) * sqrt(5));

}

void solve()
{

   int n = 0;
   scanf("%d" , &n);
   printf("%lld\n" , getFib(n));

}

int main()
{
    solve();
}