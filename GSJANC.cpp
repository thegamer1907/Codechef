#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

vector<int> a[1005];


int bfs(int s,int e,int n)
{
    vector<int> dist(n+1,INT_MAX);
    vector<int> vis(n+1,0);
    queue<int> q;
    q.push(s);
    dist[s] = 0;
    vis[s] = 1;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(auto v : a[u])
        {
            if(!vis[v])
            {
                dist[v] = dist[u]+1;
                vis[v] = 1;
                q.push(v);
            }
        }
    }
    return dist[e];
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int s,e,u,v,n,m;
        cin>>n>>m>>s>>e;
        for(int i=0;i<m;i++)
        {
            cin>>u>>v;
            a[u].pb(v);
            a[v].pb(u);
        }
        int ans = bfs(s,e,n);
        if(ans == INT_MAX || ans ==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<" "<<ans-1<<endl;
        for(int i=0;i<=n;i++)
            a[i].clear();
    }
    return 0;
}

