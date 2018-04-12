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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n;
        vector<ll> a;
        ll cnt=0,ans=0;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            if(a.size()==0)
              a.pb(x);
            else
            {
                if(a[a.size()-1]<=x)
                    a.pb(x);
                else
                {
                    cnt = a.size();
                    ans+= (cnt*(cnt+1))/2;
                    a.clear();
                    a.pb(x);
                }
            }
        }
        cnt = a.size();
        ans+= (cnt*(cnt+1))/2;
        cout<<ans<<endl;
    }
    return 0;
}