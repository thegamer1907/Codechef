#include <iostream>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,sum=0;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==0)
         cout<<n<<endl;
        else if(a[0]%2!=0 || a[n-1]%2!=0)
         cout<<n-1<<endl;
        else
        {
            ll l=0,r=n-1;
            while(a[l]%2==0)
             l++;
            while(a[r]%2==0)
             r--;
            cout<<max(n-1-l,r)<<endl;
        }
    }
	return 0;
}
