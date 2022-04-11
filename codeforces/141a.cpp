#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
string a,b,c;
cin>>a>>b>>c;
int cnt1=0;int cnt2=0;
set<char> s;
for(int i=0;i<a.size();i++){
    for(int j=0;j<c.size();j++){
        if(a[i]==c[j]){
            c[j] = '^';
            cnt1++;
            break;
        }
    }
}
for(int i=0;i<b.size();i++){
    for(int j=0;j<c.size();j++){
        if(b[i]==c[j]){
            c[j] = '^';
            cnt2++;
            break;
        }
    }
}
for(int i=0;i<c.size();i++){
    s.insert(c[i]);
}
if(s.size() == 1 && cnt1==a.size() && cnt2==b.size()){
        cout<<"YES"<<endl;
}else{
cout<<"NO"<<endl;
}
}