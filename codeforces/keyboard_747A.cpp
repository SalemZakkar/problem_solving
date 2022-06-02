// https://codeforces.com/contest/474/problem/A

#include <bits/stdc++.h>

using namespace std;

void change(int i , string &s , char c , string &res , int in)
{
    if(i!=-1 && i<res.length())
    {
        if(c == 'R')
    {
        s[in] = res[i-1];
    }
    else{
        s[in] = res[i+1];
    }
    }
}

void solve()
{
    string r1 = "qwertyuiop";
    string r2 = "asdfghjkl;";
    string r3 = "zxcvbnm,./";
    char a;
    string s;
    cin >> a;
    cin >> s;
    for(int i = 0 ; i < s.length() ; i ++)
    {
        change(r1.find(s[i]) , s , a , r1 , i);
        change(r2.find(s[i]) , s , a , r2 , i);
        change(r3.find(s[i]) , s , a , r3 , i);
    }
    cout << s << endl;
}

int main()
{
    solve();
}