#include<bits/stdc++.h>
#define ll long long int

using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,d,u,v,w;
        cin>>n>>d;
        vector<pair<ll,ll> > a[d+1];
        for(ll i=0;i<n;i++)
        {
            cin>>u>>v>>w;
            a[u].push_back(make_pair(w,v));
        }
        priority_queue<pair<ll,ll> > q;
        for(ll i=1;i<=d;i++)
        {
            for(ll j=0;j<a[i].size();j++)
            {
                q.push(make_pair(a[i][j].first,a[i][j].second));
            }
            if(!q.empty())
            {
                ll sad = q.top().first;
                ll rem = q.top().second;
                q.pop();
                rem--;
                if(rem>0)
                    q.push(make_pair(sad,rem));
            }
        }
        ll ans=0;
        while(!q.empty())
        {
           ll sad = q.top().first;
           ll rem = q.top().second;
           q.pop();
           ans+=(sad*rem);
        }
        cout<<ans<<endl;
    }
}
