/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        16 March 2018 (Friday)
* Time:        23:31
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
    	ll x,y,n;
    	cin>>x>>y;
    	//ll temp = y+1;
    	n = y-x;
    	//((y+1)*((2*y) + 3)*((2*y) + 1))

    	ll ans = ((n)*(n-1)*(2*n - 1))/3;
    	ans%=mod;
    	ans*=2;
    	ans%=mod;

    	ans = ((ans%mod) + (4*n*x*x)%mod)%mod;

    	ans = ((ans%mod) + (2*n*n - n + 4*n*n*x)%mod)%mod;

    	cout<<ans<<endl;
    }
    return 0;
}
