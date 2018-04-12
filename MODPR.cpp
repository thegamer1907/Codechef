/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        17 March 2018 (Saturday)
* Time:        00:04
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
    	int n,k;
    	cin>>n>>k;
    	if(k >= n)
    	{
    		cout<<0<<endl;
    	}
    	else
    	{
    		ll sum = 0;
    		for(int i=k+1;i<=n;i++)
    		{
    			sum+=(1+ (n-k)/i);
    		}
    		cout<<sum<<endl;
    	}
    }
    return 0;
}
