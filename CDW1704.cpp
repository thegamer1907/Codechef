#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool vis[100005];
vector<ll> a[100005];

void dfs(ll u)
{
    vis[u]=true;
    for(ll v:a[u])
    {
        if(!vis[v])
         dfs(v);
    }
}

int main() {
    ll n,m,u,v;
    cin>>n>>m;
    while(m--)
    {
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    memset(vis,false,sizeof(vis));
    ll c=0;
    for(ll i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
            c++;
        }
    }
    cout<<c-1;
	return 0;
}
