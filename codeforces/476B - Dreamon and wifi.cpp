#include <bits/stdc++.h>

using namespace std;

int d = 0 , temp = 0;
int g = 0 , w = 0;
string a , b;
void check(string &s , int f)
{
    for(int i = 0 ; i < s.length() ; i ++)
    {
        if(s[i] == '+')
        {
            if(f)
            {
                temp++;
            }
            else
            {
                d++;
            }
        }
        else
        {
            if(f)
            {
                temp--;
            }
            else{
                d--;
            }
        }
    }
}
void backtrack(string s , int i)
{
    if(i == s.size())
    {
        check(s , 1);
        if(temp == d)
        {
            g++;
        }
        else
        {
            w++;
        }
        temp = 0;
        return;
    }
    if(s[i] == '?')
    {
        s[i] = '+';
        backtrack(s, i + 1);
        s[i] = '-';
        backtrack(s, i+1);
    }
    else{
        backtrack(s, i+1);
    }
}
void solve()
{
    cout<<setprecision(10);
    cin >> a >> b;
    check(a , 0);
    backtrack(b , 0);
    double ans = (double)g / ((double)w + (double)g);

    cout<<ans<<endl;



}

int main()
{
    solve();
}
