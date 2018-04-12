#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll u,v;
	    double t,d;
	    cin>>u>>v>>d;
	    printf("%lf\n",d/(u+v));
	}
	return 0;
}
