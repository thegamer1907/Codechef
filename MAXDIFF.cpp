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
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll d=0,f=0;
        sort(all(a));
        if(k>n-k)
        {
            k=n-k;
        }
        for(ll i=0;i<k;i++)
        {
            d+=a[i];
        }
        cout<<sum-(2*d)<<endl;
    }
    return 0;
}