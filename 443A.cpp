#include <bits/stdc++.h>

using namespace std;

map<char,bool> m;
int main() {

string a = " ";
getline(cin , a);
int cnt(0);
for(int i=0;i<a.size();i++){
        //cout<<a[i]<<endl;
    if(a[i]>=97 && a[i]<=122 && m[a[i]] == false){
        cnt++;
        m[a[i]] = true;
    }
}
cout<<cnt<<endl;
m.clear();
cnt = 0;

}
