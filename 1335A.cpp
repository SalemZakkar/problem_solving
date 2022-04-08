#include <bits/stdc++.h>

using namespace std;

int main() {

int t=0;
cin>>t;
while(t--){
    long long n = 0;
    cin>>n;
    if(n == 1){
        cout<<0<<endl;
    }else{
    long long temp = n - ((n/2) + 1);
    cout<<temp<<endl;
    }
}

}
