/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        10 April 2018 (Tuesday)
* Time:        10:24
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
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
   	ll m,n,x;
   	cin>>m>>n;
   	ll ans = 0;
   	for(int i=1;i<=n;i++)
   	{
   		cin>>x;
   		ll z = m^x;
   		while(z)
   		{
   			ans+=(z%2);
   			z/=2;
   		}
   	}
   	cout<<ans;
    return 0;
}
