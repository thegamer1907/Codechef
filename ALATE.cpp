#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()

using namespace std;
/*1
3 1
1000000000 1000000000 1000000000
1 1
*/


vector<ll> fac[100009];
void init()
{
    vector<pair<ll,bool> > primes(100006);
    primes[0].first=0;
    primes[0].second=true;
    primes[1].first=1;
    primes[1].second=true;
    fac[1].push_back(1);
    for(ll i=2;i<=100005;i++)
    {
        primes[i].first=i;
        primes[i].second=false;
        fac[i].push_back(i);
        fac[i].push_back(1);
    }
    ll now=2,f=1,present=4;
    while(f==1)
    {
        f=0;
        while(present<=100005)
        {
            f=1;
            primes[present].second=true;
            fac[present].push_back(now);
            present+=now;
        }
        now+=1;present=now*2;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    init();
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,q;
    scanf("%d %d",&n,&q);
    vector<ll> a(n+1),cum(n+1,0);
    for(int i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    for(int i=n;i>=1;i--)
    {
        ll val = ((a[i]%m)*(a[i]%m))%m;
        for(int j=0;j<fac[i].size();j++)
        {
            cum[fac[i][j]] = ((cum[fac[i][j]]%m)+(val%m))%m;
        }
    }
    ll ty,ele,in;
    while(q--)
    {
        scanf("%lld",&ty);
        if(ty==1)
        {
            scanf("%lld",&ele);
            printf("%lld\n",cum[ele]);
        }
        else
        {
            scanf("%lld %lld",&in,&ele);
            ll nv,ov;
            ov = ((a[in]%m)*(a[in]%m))%m;
            a[in] = ele;
            nv = ((a[in]%m)*(a[in]%m))%m;
            for(int j=0;j<fac[in].size();j++)
            {
                cum[fac[in][j]] = ((cum[fac[in][j]]%m)-(ov%m)+m)%m;
                cum[fac[in][j]] = ((cum[fac[in][j]]%m)+(nv%m))%m;
            }
        }
    }
    }
}
