#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;


typedef int fType;

struct edge{
	int from, to;
	fType flow, cap;
};

struct DinicFlow{
	vector <edge> edges;
	vector <int> dist, now;
	vector <vector <int> > adj;
	int n, src, snk;
	const int inf = 1e9+7;

	DinicFlow() {}

	DinicFlow(int nn) {
		n = nn;
		dist.resize(n);
		now.resize(n);
		adj.resize(n);
	}

	void addEdge(int from, int to, int cap){
		//cout<<from<<" "<<to<<" "<<endl;
		adj[from].push_back(edges.size());
		edges.push_back({from, to, 0, cap});
		adj[to].push_back(edges.size());
		edges.push_back({to, from, 0, 0});
	}

	bool bfs(){
		for(int i = 0; i < n; ++i) {
			dist[i] = inf;
			now[i] = (int)adj[i].size() - 1;
		}
		queue <int> Q;
		Q.push(src), dist[src] = 0;
		while(!Q.empty()){
			int v = Q.front(); Q.pop();
			for(int w : adj[v]) {
				edge & e = edges[w];
				if(dist[e.to] > dist[v] + 1 && e.cap - e.flow > 0){
					dist[e.to] = dist[v] + 1;
					Q.push(e.to);
				}
			}
		}
		return dist[snk] != inf;
	}

	fType dfs(int u, fType flow){
		if(u == snk || !flow) return flow;
		for(int & w = now[u]; w >= 0; --w){
			edge & e = edges[adj[u][w]];
			if(dist[e.to] == dist[u] + 1 && e.cap > e.flow){
				fType fl = dfs(e.to, min(flow, e.cap - e.flow));
				if(fl > 0){
					e.flow += fl;
					edges[adj[u][w] ^ 1].flow -= fl;
					return fl;
				}
			}
		}
		return 0;
	}

	fType getFlow(int source, int sink){
		src = source, snk = sink;
		fType totFlow = 0;
		fType flowLimit = std::numeric_limits<fType>::max() >> 2;
		while(bfs()){
			while(fType f = dfs(src, flowLimit)){
				totFlow += f;
			}
		}
		return totFlow;
	}
};

ll dist(pair<ll,ll> a,pair<ll,ll> b)
{
    return (((ll)abs(a.ff-b.ff)*abs(a.ff-b.ff)) + ((ll)abs(a.ss-b.ss)*abs(a.ss-b.ss)));
}


int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<pair<ll,ll> > a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].ff>>a[i].ss;
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i].ff>>b[i].ss;
    }
    vector<pair<ll,pair<ll,ll> > > fin;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           fin.pb(mp(dist(a[i],b[j]),mp(i+1,j+1)));
        }
    }
    sort(all(fin));
    reverse(all(fin));
    ll l = 0, r = fin[0].ff+5;
    //cout<<r<<" ";
    //for(int i=0;i<fin.size();i++)
        //cout<<fin[i].ff<<endl;
    while(l <= r)
    {
        ll mid = (l+r)/2;
        DinicFlow d(2*n+2);
        for(int i=1;i<=n;i++)
        {
            d.addEdge(0,i,1);
            d.addEdge(n+i,2*n+1,1);
        }
        for(int i=0;i<fin.size();i++)
        {
            if(fin[i].ff > mid)
            {
                d.addEdge(fin[i].ss.ff,fin[i].ss.ss+n,1);
            }
            else
                break;
        }
        int ans = d.getFlow(0,2*n+1);
        //cout<<"flow "<<ans<<endl;
        if((2*n-ans)>=k)
            r = mid-1;
        else
            l = mid+1;
    }
    //cout<<l<<" "<<r<<" ";
    long double ans = (long double)sqrt(l);
    printf("%.10Lf",ans);
    return 0;
}

