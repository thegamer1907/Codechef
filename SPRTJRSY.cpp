/**
* Author:      Harshit Agarwal
* Username:    thegamer1907
* Date:        17 March 2018 (Saturday)
* Time:        00:46
*/

#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

vector<ll> fac(300001);
vector<ll> p(300001);
ll mmi(ll a,ll b)
{
    ll q,r1,r2,r,s1,s2,s,t1,t2,t;
    r1=a;
    r2=b;
    s1=1;
    s2=0;
    t1=0;
    t2=1;
    do
    {
        q=r1/r2;
        r=r1%r2;
        s=s1-(q*s2);
        t=t1-(q*t2);
        r1=r2;
        r2=r;
        s1=s2;
        s2=s;
        t1=t2;
        t2=t;
    }while(r>1);
    if(s2<0)
    {
        return s2+b;
    }
    else
        return s2;
}
void init()
{
    fac[0]=1;
    p[0]=1;
    for(ll i=1;i<fac.size();i++)
    {
        fac[i]=((fac[i-1]%m)*(i%m))%m;
        p[i]=((p[i-1]%m)*(2%m))%m;
    }
}
 
ll ncr(ll n,ll r)
{
    ll num=fac[n]%m;
    ll den=((fac[n-r]%m)*(fac[r]%m))%m;
    num=(num*mmi(den,m))%m;
    return num;
}
 
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    init();
    while(t--)
    {
        ll k;
        cin>>k;
        ll x1 = ncr(2*k-1,k);

        x1 = (x1*2)%m;

        x1 = (x1 - k + m)%m;

        cout<<x1<<endl;
    }
    return 0;
}
