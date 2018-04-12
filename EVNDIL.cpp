/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        17 March 2018 (Saturday)
* Time:        00:30
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


ll power(ll a, ll b)	//a is base, b is exponent
{
	if(b==0)
		return 1;
	if(b==1)
		return a;
	if(b%2 == 1)
		return (power(a,b-1)*a)%mod;
	ll q = power(a,b/2);
	return (q*q)%mod;
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	ll k;
    	cin>>k;
    	ll ans = power(10,k-1);

    	ans = ((ans%mod)*5)%mod;

    	ll d = power(8,k-1);

    	d = ((d%mod)*4)%mod;

    	ll fin = ((ans%mod) + (d%mod))%mod;

    	cout<<fin<<endl;
    }
    return 0;
}
