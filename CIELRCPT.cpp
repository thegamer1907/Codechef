#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	vector<ll> p2;
	p2.push_back(1);
	for(int i=1;i<=17;i++)
	 p2.push_back(p2[i-1]*2);
	ll t;
	cin>>t;
	while(t--)
	{
	    //cout<<p2[11]<<endl;
	    ll n,n1;
	    cin>>n;
	    int cnt=0;
	    int i=11;
	    while(n)
	    {
	        n1 = n%p2[i--];
	        if(n1!=n)
	        {
	            cnt+=(n/p2[i+1]);
	            n=n1;
	        }
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}
