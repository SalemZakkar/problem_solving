#include <bits/stdc++.h>

using namespace std;

vector<int> constructTheArray(int n)
{
    vector<int> ans(n , 0);
    priority_queue<pair<int,pair<int , int>>> pq;
    pq.emplace(make_pair(n , make_pair(0 , n -1)));
    int cnt = 0;
    while(!pq.empty())
    {
        int l = -1 *  pq.top().second.first;
        int r =  pq.top().second.second;
        pq.pop();
        if(l > r)
            continue;
        int mid = (l+r) / 2;
        ans[mid] = ++cnt;
        int s1 = mid - l + 1;
        int s2 = r - mid+1;
        pq.push(make_pair(s1 , make_pair( -1 * l , mid - 1)));
        pq.push(make_pair(s2 , make_pair( -1 * (mid+1) , r)));
    }
    return ans;

}

void solve()
{
    int n = 0;
    scanf("%d" , &n);
    vector<int> v = constructTheArray(n);
    for(auto &i : v)
    {
        printf("%d " , i);
    }
    printf("\n");

}

int main()
{
    int n = 0;
    scanf("%d" , &n);
    while(n--)
    {
        solve();
    }
}
