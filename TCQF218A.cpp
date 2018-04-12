/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        04 March 2018 (Sunday)
* Time:        18:55
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
    	int n,c;
    	cin>>n>>c;
    	vector<int> v(c);
    	for(int i=0;i<c;i++)
    		cin>>v[i];
    	int ans = 2*c - n;
    	if(ans > 0)
    		cout<<ans<<endl;
    	else
    		cout<<1<<endl;
    }
    return 0;
}
