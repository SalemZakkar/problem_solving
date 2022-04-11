#include <bits/stdc++.h>

using namespace std;
map<int64_t,bool> used;
int cnt(0);
void check(long long x){
if(used[x]){cnt++;used[x] = true;}else{used[x] = true;}
}
int main() {

long long a(0),b(0),c(0),d(0);
cin>>a;
used[a] = true;
cin>>b;
check(b);
cin>>c;
check(c);
cin>>d;
check(d);
cout<<cnt<<endl;

}
