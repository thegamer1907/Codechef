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
        ll a,b,c,d,e,f,l,r;
        cin>>a>>b>>c>>d>>e>>f>>l>>r;
        if(r < l)
            swap(l,r);
        ll v1 = max(a,b);
        ll v2 = max(d,e);
        ll chk = max(v1,v2);
        ll v3 = min(a,b);
        ll v4 = min(d,e);
        ll chk2 = max(v3,v4);
        if(chk2 > l || chk > r)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<pair<ll,ll> > abc(3);
        vector<pair<ll,ll> > def(3);
        if(v1 == a)
        {
            abc[0] = mp(0,b);
            abc[1] = mp(a,0);
            abc[2] = mp(0,0);
        }
        else
        {
            abc[0] = mp(0,0);
            abc[1] = mp(b,a);
            abc[2] = mp(b,0);
        }
        if(v2 == d)
        {
            def[0] = mp(r,l-e);
            def[1] = mp(r-d,l);
            def[2] = mp(r,l);
        }
        else
        {
            def[0] = mp(r,l-d);
            def[1] = mp(r-e,l);
            def[2] = mp(r-e,l-d);
        }
        for(auto u : abc)
        {
            cout<<u.ff<<" "<<u.ss<<endl;
        }
        for(auto u : def)
        {
            cout<<u.ff<<" "<<u.ss<<endl;
        }
    }
    return 0;
}

