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
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<ll> left(n),leftm(n);
        left[0] = a[0];
        ll msf = a[0];
        ll meh = a[0];
        leftm[0] = a[0];
        ll mmsf = a[0];
        ll mmeh = a[0];
        for(int i=1;i<n;i++)
        {
            meh = max(a[i],meh+a[i]);
            msf = max(msf,meh);
            left[i] = msf;
            mmeh = min(a[i],mmeh+a[i]);
            mmsf = min(mmsf,mmeh);
            leftm[i] = mmsf;
        }
        vector<ll> right(n),rightm(n);
        right[n-1] = a[n-1];
        rightm[n-1] = a[n-1];
        msf = a[n-1];
        meh = a[n-1];
        mmsf = a[n-1];
        mmeh = a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            meh = max(a[i],meh+a[i]);
            msf = max(msf,meh);
            right[i] = msf;
            mmeh = min(a[i],mmeh+a[i]);
            mmsf = min(mmsf,mmeh);
            rightm[i] = mmsf;
        }
        ll ans = INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            ll x = abs(left[i]-rightm[i+1]);
            ans = max(ans,x);
            x = abs(leftm[i] - right[i+1]);
            ans = max(ans,x);
        }
        cout<<ans<<endl;
    }
    return 0;
}
