#include<bits/stdc++.h>
#define ll long long int



using namespace std;

ll mod(ll a, ll m)
{
    ll m0 = m, t, q;
    ll x0 = 0, x1 = 1;

    if (m == 1)
      return 0;

    while (a > 1)
    {
        // q is quotient
        q = a / m;

        t = m;

        // m is remainder now, process same as
        // Euclid's algo
        m = a % m, a = t;

        t = x0;

        x0 = x1 - q * x0;

        x1 = t;
    }

    // Make x1 positive
    if (x1 < 0)
       x1 += m0;

    return x1;
}


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,n;
        cin>>a>>n;
        if(a==1 || n==1)
        {
            cout<<1<<endl;
            continue;
        }
        if(__gcd(a,n)==1)
        {
            cout<<mod(a,n)<<endl;
        }
        else
            cout<<-1<<endl;
    }
}
