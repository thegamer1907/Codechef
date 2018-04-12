#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

ll a[1005][1005];
int vis[1005][1005];
int dx[] = {0,0,1,-1};
int dy[] = {-1,1,0,0};

void dfs(int a1,int b,int n,int m)
{
    vis[a1][b] = 1;
    for(int i=0;i<4;i++)
    {
        int u = a1+dx[i],v = b+dy[i];
        if(u<1 || u>n || v<1 || v>m)
            continue;
        if((a[u][v] > a[a1][b])||vis[u][v])
            continue;
        dfs(u,v,n,m);
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        priority_queue<pair<ll,pair<ll,ll> > > q;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                cin>>a[i][j];
                q.push(mp(a[i][j],mp(i,j)));
            }
        }
        for(int i=0;i<1005;i++)
        {
            for(int j=0;j<1005;j++)
                vis[i][j] = 0;
        }
        ll cnt=0;
        while(!q.empty())
        {
            pair<ll,pair<ll,ll> > p = q.top();
            q.pop();
            if(vis[p.ss.ff][p.ss.ss])
                continue;
            else
            {
                dfs(p.ss.ff,p.ss.ss,n,m);
                cnt+=1;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

