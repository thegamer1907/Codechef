#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

long long int power(long long int x,long long int y,long long int m)
{
    long long int res = 1;
    x = x % m;  // Mods
    while (y > 0)
      {
        if (y & 1)
            res = (res*x) % m;
        y = y>>1;
        x = (x*x) % m;
    }
    return res;
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>k>>n;
        if(n==1)
        {
            cout<<1<<endl;
        }
        else if(n==2)
        {
            cout<<k<<endl;
        }
        else if(n==3)
        {
            cout<<k<<endl;
        }
        else
        {
            ll ans = power(2,n-3,mod-1);
            ans = power(k,ans,mod);
            cout<<ans<<endl;
        }
    }
    return 0;
}
