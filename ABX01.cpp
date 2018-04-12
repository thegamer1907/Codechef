#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;


ll po(ll x,ll y,ll m)
{
    ll res = 1;
    x = x % m;  // Mods
    while (y > 0)
      {
        if (y & 1)
            res = (res*x) % m;
        y = y>>1;
        x = (x*x) % m;
    }
    return res==0?9:res;
}


int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        ll a,n;
        cin>>a>>n;
        cout<<po(a,n,9)<<endl;
    }
    return 0;
}
