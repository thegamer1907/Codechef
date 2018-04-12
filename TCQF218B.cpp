/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        04 March 2018 (Sunday)
* Time:        14:45
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
    	int x,y;
    	cin>>x>>y;
    	int a1 = 0,b1 = 0;
    	vector<int> a(11),b(11);
    	for(int i=0;i<11;i++)
    	{
    		cin>>a[i];
    		if(a[i] & 1)
    			a1++;
    	}

    	for(int i=0;i<11;i++)
    	{
    		cin>>b[i];
    		if(b[i] & 1)
    			b1++;
    	}

    	if(a1 == b1)
    		cout<<"alan"<<endl;
    	else if(a1 > b1)
    	{
    		if(x > y)
    			cout<<"alan"<<endl;
    		else
    			cout<<"chef"<<endl;
    	}
    	else
    	{
    		if(x > y)
    			cout<<"chef"<<endl;
    		else
    			cout<<"alan"<<endl;
    	}    
    }
    return 0;
}
