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
        ll n;
        cin>>n;
        vector<ll> a(n);
        vector<ll> dp(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        dp[n-1]=1;
        for(ll i=n-2;i>=0;i--)
        {
            if((a[i]>0 && a[i+1]<0) || (a[i]<0 && a[i+1]>0))
                dp[i] = dp[i+1]+1;
            else
                dp[i]=1;
        }
        for(ll i=0;i<n;i++)
        {
            cout<<dp[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}