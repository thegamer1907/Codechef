#include<bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;


vector<pair<bool,vector<ll> > > a(1000001);
void init()
{
	for(ll i=0;i<1000001;i++)
	{
		a[i].first=true;
	}
	ll now=2,pres=2*now;
	while(now<1000001)
	{
		while(pres<1000001)
		{
			a[pres].first=false;
			a[pres].second.pb(now);
			pres+=now;
		}
		now++;
		while(now<1000001&&a[now].first==false)
		{
			now++;
		}
		pres=2*now;
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	init();
	while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> give(n);
        for(ll i=0;i<n;i++)
        {
            cin>>give[i];
        }
        map<ll,ll> mp;
        for(ll i=0;i<n;i++)
        {
            if(give[i]==0||give[i]==1)
            {
                continue;
            }
            if(a[give[i]].first==true)
            {
                mp[give[i]]++;
                continue;
            }
            for(ll j=0;j<a[give[i]].second.size();j++)
            {
                mp[a[give[i]].second[j]]++;
            }
        }
        vector<ll> v;
        map<ll,ll>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            v.pb(it->second);
        }
        sort(v.rbegin(),v.rend());
        if(v.empty())
        {
            cout<<1<<endl;
            continue;
        }
        cout<<v[0]<<endl;
    }
	return 0;
}
