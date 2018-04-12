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
        ll n,q;
        cin>>n>>q;
        ll max1 = 0;
        vector<ll> a(n),b;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            max1 = max((ll)0,a[i]);
        }
        int flag=0;
        ll pro=1;
        for(ll i=0;i<n;i++)
        {
            pro*=a[i];
            if(pro>1e9)
            {
                flag=1;
                break;
            }
        }
        b.clear();
        while(q--)
        {

            ll x;
            cin>>x;
            if(flag)
                b.pb(0);
            else
                b.pb(x/pro);
        }
        for(ll i=0;i<b.size();i++)
                cout<<b[i]<<" ";
        cout<<endl;
    }

}
