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
    x = x % m;
    while (y > 0)
      {
        if (y & 1)
        res = (res*x) % m;
        y = y>>1; 
        x = (x*x) % m;
    }
    return res;
}




map<ll,ll> gr;
void fun(ll n)
{
    map<ll,ll> freq;
    while (n%2 == 0)
    {
        freq[2]++;
        n = n/2;
    }
    for (ll i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            freq[i]++;
            n = n/i;
        }
    }
    if (n > 2)
        freq[n]++;
    map<ll,ll>:: iterator it;
    for(it=freq.begin();it!=freq.end();it++)
    {
        if(gr[it->ff]<it->ss)
            gr[it->ff]=it->ss;
    }
}




ll lcm(vector<ll>&b)
{
    gr.clear();
    for(int i=0;i<b.size();i++)
        fun(b[i]);
    ll ans=1;
    map<ll,ll>:: iterator it;
    for(it=gr.begin();it!=gr.end();it++)
    {
        ans = ((ans%mod)*power(it->ff,it->ss,mod))%mod;
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n),b;
        ll vis[n] = {0};
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]--;
        }
        for(ll i=0;i<n;i++)
        {
            if(vis[i])
                continue;
            ll c=0,st = i;
            while(1)
            {
                if(vis[st])
                {
                    b.pb(c);
                    break;
                }
                c++;
                vis[st]=1;
                st = a[st];
            }
        }
        cout<<lcm(b)<<endl;
    }
    return 0;
}
