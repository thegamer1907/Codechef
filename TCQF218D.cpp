/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        04 March 2018 (Sunday)
* Time:        14:54
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
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	vector<pair<string,pair<string,string> > > v(n);
    	map<string,string> m;
    	map<string,int> vis;
    	int cnt = -1;
    	for(int i=0;i<n;i++)
    	{
    		cin>>v[i].ff>>v[i].ss.ff>>v[i].ss.ss;
    	}

    	for(int i=0;i<n;i++)
    	{
    		if(vis[v[i].ss.ss])
    		{
    			if(m[v[i].ss.ss] == v[i].ss.ff)
    				cnt = 1;
    			else
    				cnt = 2;
    			break;
    		}
    		else
    		{
    			vis[v[i].ss.ss] = 1;
    			m[v[i].ss.ss] = v[i].ss.ff;
    		}
    	}
    	cout<<cnt<<endl;
    }
    return 0;
}
