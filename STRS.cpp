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





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	string s;
    	cin>>s;
    	int ans = 0;
    	for(int i=0;i<s.length()-2;i++)
    	{
    		if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0')
    		{
    			ans++;
    			s[i+2] = '1';
    		}
    	}
    	cout<<ans<<endl;
    }
    return 0;
}
