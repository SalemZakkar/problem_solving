#include <bits/stdc++.h>

using namespace std;

int main(){
int t=0;
cin>>t;
while(t--){
    long long a(0),b(0);
    cin>>a>>b;
    long long ans = 0;
    if(a%b==0){
        cout<<0<<endl;
    }else{
    ans = b - (a%b);
    cout<<ans<<endl;
    }
}
}
