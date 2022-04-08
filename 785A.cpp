#include <bits/stdc++.h>

using namespace std;

int main() {
map<string , int> cases;
cases["Octahedron"] = 8;
cases["Cube"] = 6;
cases["Tetrahedron"] = 4;
cases["Dodecahedron"] = 12;
cases["Icosahedron"] = 20;
int ans = 0;
int n(0);
cin>>n;
for(int i=0;i<n;i++){
    string t;
    cin>>t;
    ans += cases[t];
}
cout<<ans<<endl;
}
