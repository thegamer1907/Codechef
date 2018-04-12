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
        ll n,x;
        cin>>n;
        multiset<ll> s;
        for(ll i=0;i<(1<<n);i++)
        {
            cin>>x;
            if(x==0)
                continue;
            s.insert(x);
        }
        vector<ll> sub;
        sub.pb(*s.begin());
        s.erase(s.find(sub[0]));
        vector<ll> ans;
        ans.pb(sub[0]);
        for(int i=1;i<n;i++)
        {
            ll m = *s.begin();
            ans.pb(m);
            ll last = sub.size();
            for(int j=0;j<last;j++)
            {
                ll c = sub[j] + m;
                s.erase(s.find(c));
                sub.pb(c);
            }
            sub.pb(m);
            s.erase(s.find(m));
        }
        for(auto y : ans)
            cout<<y<<" ";
        cout<<endl;
    }
    return 0;
}

