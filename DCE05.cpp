#include <bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> p2(65);

void power()
{
    p2[0]=1;
    for(int i=0;i<62;i++)
    {
        p2[i+1]=p2[i]*2;
    }
}

int main() {
	power();
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    int l=0,r=63;
	    while(l<r-1)
	    {
	        int mid=(r+l)/2;
	        if(p2[mid]>=n)
	         r=mid;
	        else
	         l=mid;
	    }
	    cout<<p2[l]<<endl;
	}
	return 0;
}
