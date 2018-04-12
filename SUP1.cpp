/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        22 March 2018 (Thursday)
* Time:        00:36
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
		return (power(a,b-1)*a);
	ll q = power(a,b/2);
	return (q*q);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	if(n == 1 || n==0 ) 
    		cout<<"Supraja"<<endl;
    	else if(((n-2)%9 == 0) || ((n-2)%9 == 1))
    		cout<<"Sailaja"<<endl;
    	else 
    		cout<<"Supraja"<<endl;
    }
    return 0;
}
