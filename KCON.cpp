#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;
// code taken from geeks for geeks
ll fin(vector<ll> a, ll size)
{
    int flag=1;
    for(int i=0;i<a.size();i++)
        if(a[i] >0)
        {
            flag=0;
            break;
        }
    if(flag)
        return a[max_element(all(a))-a.begin()];
   ll max_so_far = 0, max_ending_here = 0;
   for (ll i = 0; i < size; i++)
   {
       max_ending_here = max_ending_here + a[i];
       if (max_ending_here < 0)
           max_ending_here = 0;
       else if (max_so_far < max_ending_here)
           max_so_far = max_ending_here;
   }
   return max_so_far;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        ll flag = 1;
        ll sum = 0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]<0)
                flag=0;
        }
        if(k==1)
        {
            cout<<fin(a,n)<<endl;
        }
        else if(k==2 || sum<=0)
        {
            vector<ll> ab;
            for(ll i=0;i<n;i++)
                ab.pb(a[i]);
            for(ll i=0;i<n;i++)
                ab.pb(a[i]);
            cout<<fin(ab,2*n)<<endl;
        }
        else if(flag)
        {
            cout<<sum*k<<endl;
        }
        else
        {
            ll ans = sum*(k-2);
            ll maxl = a[0];
            ll cuml = a[0];
            for(int i=1;i<n;i++)
            {
                cuml+=a[i];
                maxl = max(maxl,cuml);
            }
            ll maxr = a[n-1];
            ll cumr = a[n-1];
            for(int i=n-2;i>=0;i--)
            {
                cumr+=a[i];
                maxr = max(maxr,cumr);
            }
            cout<<ans+maxl+maxr<<endl;
        }
    }
    return 0;
}
