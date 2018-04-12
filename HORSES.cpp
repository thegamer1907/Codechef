#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        ll m = a[1]-a[0];
        for(ll i=1;i<n-1;i++)
        {
            if((a[i+1]-a[i])<m)
                m =a[i+1]-a[i];
        }
        cout<<m<<endl;
    }
}
