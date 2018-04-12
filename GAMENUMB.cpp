/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        25 February 2018 (Sunday)
* Time:        13:56
*/

#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,k,x;
    	cin>>n>>k;
    	map<ll,ll> m;
    	vector<ll> a(n);
    	vector<pair<ll,ll> > p(n);
    	for(ll i=0;i<n;i++)
    	{
    		cin>>a[i];
    	}
    	ll ps= 0;
    	for(ll i=0;i<n;i++)
    	{
    		cin>>x;
    		ps+=x;
    		p[i] = mp(a[i],x);
    	}
    	sort(all(p));
    	/*for(ll i=0;i<p.size();i++)
    	{
    		cout<<p[i].ff<<" "<<p[i].ss<<endl;
    	}*/
    	vector<ll> b(k);
    	for(ll i=0;i<k;i++)
    		cin>>b[i];
    	ll pos1 = 0,pos2 = p.size()-1;
    	//cout<<ps<<endl;
    	for(ll i=0;i<k;i++)
    	{
    		if((i+1)%2==1) // Chef so take maximum
    		{
    			ll j,te = 0;
    			for(j = pos1;;j++)
    			{
    				if((te + p[j].ss) <=ps - b[i])
    					te+=p[j].ss;
    				else
    				{
    					if(j == p.size())
    						break;
    					if(ps - b[i] == te)
    					{
    						break;
    					}
    					p[j].ss -= ps - b[i] - te;
    					break;
    				}
    			}
    			pos1 = j;
    			
       			//cout<<pos1<<endl;
    		}
    		else // other so take minimum
    		{
    			ll j,te = 0;
    			for(j=pos2;;j--)
    			{
    				if((te + p[j].ss) <= ps - b[i])
    					te+=p[j].ss;
    				else
    				{
    					if(j < 0)
    						break;
    					if(ps - b[i] == te)
    					{
    						break;
    					}
    					p[j].ss -= ps - b[i] - te;
    					break;
    				}
    			}
    			pos2 = j;
    		}
    		ps = b[i];
    	}
    	ll ans = 0;
    	//cout<<pos1<<" "<<pos2<<endl;
    	for(ll i=pos1;i<=pos2;i++)
    	{
    		ans+=((p[i].ff)*(p[i].ss));
    	}
    	cout<<ans<<endl;
    }
    return 0;
}	
