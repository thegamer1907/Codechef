/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        22 March 2018 (Thursday)
* Time:        01:20
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

vector<ll> a;

int ispr[10005];
void init()
{
	for(int i=2;i*i<10005;i++)
	{
		if(ispr[i])
			continue;
		for(int j=i*2;j<10005;j+=i)
		{
			//a[j].pb(i);
			ispr[j] = 1;
		}
		//a[i].pb(i);
	}

	for(int i=2;i<10005;i++)
	{
		if(ispr[i] == 0)
			a.pb(i);
	}
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    init();
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	if(n==1){
    		cout<<1<<endl;
    		continue;
    	}
  		for(int i=0;i<a.size();i++)
  		{
  			if(n%a[i] == 0)
  			{
  				cout<<a[i]<<" ";
  			}

  			if(a[i] >=n)
  				break;
  		}
    	cout<<endl;
    }
    return 0;
}
