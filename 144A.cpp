#include <bits/stdc++.h>

using namespace std;

int main() {

int n = 0;

cin >> n;

int a[n+5];

for(int i=1;i<=n;i++){
    cin>>a[i];
}
int maximum = a[1] , minimum = a[1] , mi=1;
for(int i=1;i<=n;i++){
    if(a[i] > maximum) {maximum = a[i];mi=i;}
}
for(int i=1;i<=n;i++){
    if(a[i] < minimum){minimum = a[i];}
}
//swap(a[1] , a[mi]);
int mini = 1;
for(int i=1;i<=n;i++){
    if(a[i] == minimum){
        mini = i;
    }
}
//cout<<mi<<" "<<mini<<endl;
int ans = mi - 1 + abs(n - mini);
if(mi>mini){
    ans--;
}
if(ans<0){
    ans = 0;
}
cout<<ans<<endl;

}