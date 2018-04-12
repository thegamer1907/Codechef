#include <iostream>
#include<bits/stdc++.h>
#define pi 3.1415926535897932
#define ll long long int
using namespace std;

ll sum(vector<ll>& a,ll size)
{
    ll max_so_far = LLONG_MIN, max_ending_here = 0;
 
    for (ll i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}


int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,a,b,c,d,ele;
	    cin>>n>>a>>b>>c>>d;
	    vector<ll> arr;
	    vector<ll> m;
	    for(ll i=0;i<n;i++)
	    {
	        cin>>ele;
	        if(ele!=a && ele!=b && ele!=c && ele!=d)
	         {
	             arr.push_back(ele);
	         }
	        else
	        {
	            
	            if(arr.size()!=0)
	            {
	               m.push_back(sum(arr,arr.size()));
	            }
	            arr.clear();
	        }
	    }
	    if(arr.size()!=0)
	     m.push_back(sum(arr,arr.size()));
	    sort(m.begin(),m.end());
	    cout<<m[m.size()-1]<<endl;
	}
	return 0;
}
