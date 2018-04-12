#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

vector<pair<ll,ll> > a[3005];
vector<ll> dp(3005,1e13);
ll vis[3005];

void dfs(ll s,ll p)
{
    vis[s]=1;
    for(ll i=0;i<a[s].size();i++)
    {
        if(!vis[a[s][i].ff] && a[s][i].ff!=p)
        {
            dfs(a[s][i].ff,s);
        }
    }
    vector<ll> d;
    for(ll i=0;i<a[s].size();i++)
    {
        if(a[s][i].ff!=p)
        {
            d.pb(dp[a[s][i].ff]+a[s][i].ss);
        }
    }
    if(d.size())
    {
        sort(all(d));
        dp[s] = d[1];
    }
    else
        dp[s]=0;
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,m,k,x,y,w;
    cin>>n>>m>>k;
    vector<ll> ak(k);
    for(ll i=0;i<m;i++)
    {
        cin>>x>>y>>w;
        a[x].pb(mp(y,w));
        a[y].pb(mp(x,w));
    }
    for(ll i=0;i<k;i++)
        cin>>ak[i];
    dfs(0,-1);
    cout<<dp[0];
    return 0;
}

