#include <iostream>
#define ll long long int
#include<bits/stdc++.h>
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    vector<ll> a(n);
	    ll ans=0;
	    for(ll i=0;i<n;i++)
	     cin>>a[i];
	    sort(a.begin(),a.end());
	    ll i,j,count1;
	    for(i=0;i<n;i=j)
      {
          count1=0;
          for(j=i;j<n;j++)
          {
              if(a[i]==a[j])
                count1++;
              else
                break;
          }
         if(count1>1)
         {
             ans += count1*(count1-1);
         }
      }
      cout<<ans<<endl;
	}
	return 0;
}
