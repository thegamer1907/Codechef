#include<bits/stdc++.h>
#define ll long long int

long long int power(long long int x,long long int y,long long int m)
{
    long long int res = 1;
    x = x % m;  // Mods
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % m;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % m;
    }
    return res;
}


long long int gp(ll y,ll m,ll a,ll sr=1)
{
    ll res = 0;
    ll x = 1;
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
        {
            res = (((x%m)*(sr%m))%m+ (res%m)) % m;
            sr = ((sr%m)*(a%m))%m;
        }

        // y must be even now
        y = y>>1; // y = y/2
        x = (((x%m)*(a%m))%m +(x%m))% m;
        a = ((a%m)*(a%m))%m;
    }
    return res;
}


using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if(n<m)
        {
            ll ans=1;
            for(ll i=1;i<=n;i++)
            {
                ans = (ans + power(i, i, m)) % m;
            }
            cout<<ans<<endl;
        }
        else
        {
            ll mod = n%m;
            ll st = n%m;
            ll ans=0;
            do
            {
                //cout<<mod<<" "<<n;
                ll a = power(mod,m,m);
                ll sum = gp((n/m)+1,m,a);
                ll aa = power(mod,mod,m);
                sum = ((aa%m)*(sum%m))%m;
                ans = ((ans%m)+(sum%m))%m;
                if(mod==0)
                    mod = m-1;
                else{
                    mod--;
                }
                n--;
                //cout<<" "<<sum<<endl;
            }while(st!=mod);
            cout<<ans<<endl;
        }
    }

}
