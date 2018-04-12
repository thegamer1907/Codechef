#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll u=0,v=0;
	    ll m;
	    cin>>m;
	    u+=(m/3);
	    v+=(m/3)*2;
	    if(m%3==1)
	     u++;
	    else if(m%3==2)
	    {
	        u++;
	        v++;
	    }
	    cout<<u<<" "<<v<<endl;
	}
	return 0;
}
