#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

ll a1,not2a1;

void doit(ll a[2][2], ll b[2][2])
{
    ll mul[2][2];
    for (ll i = 0; i < 2; i++)
    {
        for (ll j = 0; j < 2; j++)
        {
            mul[i][j] = 0;
            for (ll k = 0; k < 2; k++)
                mul[i][j] =  ((mul[i][j]%mod) + ((a[i][k]%mod)*(b[k][j]%mod))%mod)%mod;
        }
    }
    for (ll i=0; i<2; i++)
        for (ll j=0; j<2; j++)
            a[i][j] = mul[i][j];
}


ll power(ll F[2][2], ll n)
{
    ll M[2][2] = {{a1,-1}, {1,0}};
    if (n==1)
        return (F[0][0]*not2a1 + F[0][1])%mod;

    power(F, n/2);
    doit(F, F);
    if (n%2 != 0)
        doit(F, M);

    return (F[0][0]*not2a1 + F[0][1])%mod;
}

ll solve(ll n)
{
    ll F[2][2] = {{a1,-1}, {1,0}} ;

    return power(F, n-1);
}

ll mmi(ll a,ll b)
{
ll q,r1,r2,r,s1,s2,s,t1,t2,t;
r1=a;r2=b;
s1=1;s2=0;
t1=0;t2=1;
do
{
q=r1/r2;r=r1%r2;
s=s1-(q*s2);t=t1-(q*t2);
r1=r2;r2=r;
s1=s2;s2=s;
t1=t2;t2=t;
}while(r>1);
if(s2<0)
return s2+b;
else
return s2;
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       ll d,l,t;
       cin>>l>>d>>t;
       ll cosin = ((d%mod)*(mmi(l,mod)))%mod;
       not2a1 = cosin;
       a1 = (cosin*2)%mod;
       if(t==1)
       {
           ll ans = d%mod;
           cout<<ans<<endl;
       }
       else
       {
           ll ans = solve(t);
           if(ans<0)
           {
               ans = (ans+mod)%mod;
           }
           ans = ((ans)*(l%mod))%mod;
           cout<<ans<<endl;
       }
   }
   return 0;
}
