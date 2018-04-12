#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

vector<ll> a[100005];
vector<ll> pre;
vector<ll> val(100005);
vector<ll> sz(100005,0);
ll vis[100005];
unordered_map<ll,ll> place;


void dfs(ll s,ll p)
{
    place[s] = pre.size();
    pre.pb(val[s]);
    vis[s]=1;
    for(ll u : a[s])
    {
        if(!vis[u] && u!=p)
            dfs(u,s);
    }
    for(ll u : a[s])
    {
        if(u!=p)
            sz[s]+=1+sz[u];
    }
}

void construct(ll st,ll en,ll pos,vector<ll>&seg,vector<ll>&a)
{
    if(st==en)
    {
        seg[pos] = a[st];
        return;
    }
    ll mid = (st+en)/2;
    construct(st,mid,2*pos+1,seg,a);
    construct(mid+1,en,2*pos+2,seg,a);
    seg[pos] = seg[2*pos+1]+seg[2*pos+2];
}

ll query(ll qlow,ll qhigh,ll st,ll en,ll pos,vector<ll>&seg)
{
    if(qlow<=st && qhigh>=en)
        return seg[pos];
    else if(qhigh<st || qlow>en)
        return 0;
    else
    {
        ll mid = (st+en)/2;
        return query(qlow,qhigh,st,mid,2*pos+1,seg)+query(qlow,qhigh,mid+1,en,2*pos+2,seg);
    }
}

void update(ll node,ll st,ll en,ll l,ll r,ll val,vector<ll>&seg)
{
    if(l>en || r<st || st>en)
        return;
    if(st>=l && en<=r)
    {
        seg[node]+=val;
        return;
    }
    ll mid = (st+en)/2;
    update(2*node+1,st,mid,l,r,val,seg);
    update(2*node+2,mid+1,en,l,r,val,seg);
    seg[node]= seg[2*node+1]+seg[2*node+2];
}

void solve(ll m)
{
    ll n = pre.size();
    vector<ll> ctree(2000000,0);
    construct(0,n-1,0,ctree,pre);
    while(m--)
    {
        char c;
        cin>>c;
        if(c=='Q')
        {
            ll x,pos;
            cin>>pos;
            x = place[pos];
            cout<<query(x,x+sz[pos],0,n-1,0,ctree)<<endl;
        }
        else
        {
            ll u,val1;
            cin>>u>>val1;
            ll x = place[u];
            update(0,0,n-1,x,x,val1-val[u],ctree);
            val[u] = val1;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,m,u,v;
    cin>>n>>m;
    for(ll i=1;i<=n;i++)
    {
        cin>>val[i];
    }
    for(ll i=0;i<n-1;i++)
    {
        cin>>u>>v;
        a[u].pb(v);
        a[v].pb(u);
    }
    for(ll i=1;i<=n;i++)
    {
        if(a[i].size()==1)
        {
            sz[i]=0;
        }
    }
    dfs(1,-1);
    solve(m);
    return 0;
}
