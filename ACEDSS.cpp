#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

vector<int> a[100005];
vector<int> vis(100005);

void dfs(int s)
{
    vis[s]=1;
    for(int i=0;i<a[s].size();i++)
    {
        if(!vis[a[s][i]])
        {
            dfs(a[s][i]);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            a[i].clear();
            vis[i]=0;
        }
        int s,u,v;
        cin>>s;
        for(int i=0;i<s;i++)
        {
            cin>>u>>v;
            a[u].pb(v);
            a[v].pb(u);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                ans++;
                dfs(i);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
