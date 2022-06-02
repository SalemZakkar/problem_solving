/*
###########################
solved by : Salem Zakkar
url : https://codeforces.com/contest/1680/problem/B
codeforces handle: salemzakkar
########################### 
 */ 

#include<bits/stdc++.h>

using namespace std;

using ll = long long;

struct Node {
    int x , y;
};

int n = 0 , m = 0;

vector<string> v;

deque<Node> q;

void init()
{
    q = deque<Node>();
    v = vector<string>(n+5);
}

bool getAns()
{
    Node node = q.front();
    q.pop_front();
    while(!q.empty())
    {
        Node nn = q.front();
        q.pop_front();
        if(nn.x<node.x || nn.y < node.y)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    scanf("%d %d" , &n , &m);
    init();
    for(int i = 0 ; i < n ; i ++)
    {
        cin>>v[i];
        for(int j = 0 ; j < m ; j ++)
        {
            if(v[i] == "R")
            {
                Node no = Node();
                no.x = i;
                no.y = j;
                q.push_back(no);
            }
        }
    }
    printf((getAns ? "YES\n" : "NO\n"));
}

int main()
{
int t = 0;
scanf("%d" , &t);
while(t--)
solve();
}
