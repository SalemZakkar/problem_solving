/*
###########################
solved by : Salem Zakkar
url : https://codeforces.com/contest/1691/problem/A
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
     int n = 0 ;
     int temp = 0 , o = 0 , e = 0;
     scanf("%d" , &n);
     for(int i = 0 ; i < n ; i ++)
     {
         scanf("%d" , &temp);
         o+= temp%2!=0;
         e+= temp%2==0;
     }
     printf("%d\n" , min(o , e));
 }
 
 int main()
 {
 int t = 0;
 scanf("%d" , &t);
 while(t--)
 solve();
 }
