/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        05 April 2018 (Thursday)
* Time:        15:17
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
    	ll n;
    	cin>>n;
    	//ll fac = 1;
    	ll sq = sqrt(n);
    	ll rep = n - sq*sq;
    	if(rep != 0)
    	{
    		if(rep > sq)
    		{
    			int x = sq;
    			int d = sq+1;
    			for(int i=0;i<sq;i++)
    				cout<<"X";
    			rep-=sq;
    			for(int i=0;i<d-rep;i++)
    				cout<<"D";
    			cout<<"X";
    			for(int i=0;i<rep;i++)
    				cout<<"D";	
    		}
    		else
    		{
    			for(int i=0;i<sq;i++)
    				cout<<"X";
    			for(int i=0;i<sq-rep;i++)
    				cout<<"D";
    			cout<<"X";
    			for(int i=0;i<rep;i++)
    				cout<<"D";
    		}
    	}
    	else
    	{
    		for(int i=0;i<sq;i++)
    				cout<<"X";
			for(int i=0;i<sq;i++)
				cout<<"D";
    	}
    	cout<<endl;
    }
    return 0;
}
