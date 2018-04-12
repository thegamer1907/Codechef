#include <bits/stdc++.h>
#define ll long long int

using namespace std;
ll modulo(ll a, ll m)
{
    ll m0 = m, t, q;
    ll x0 = 0, x1 = 1;
 
    if (m == 1)
      return 0;
 
    while (a > 1)
    {
        
        q = a / m;
        t = m;
        m = a % m, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0)
       x1 += m0;
 
    return x1;
}

int main()
{
    ll m1 = 1000000007,m2 = 1000000009;
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int n;
        cin>>n;
        ll num1 = ((n%m1)*((n-1)%m1))%m1;
        ll den1 = (((2*n - 3)%m1)*2)%m1;
        ll num2 = ((n%m2)*((n-1)%m2))%m2;
        ll den2 = (((2*n - 3)%m2)*2)%m2;
        ll b = modulo(den1,m1);
        ll a = modulo(den2,m2);
        ll ans1 = ((num1%m1)*(b))%m1;
        ll ans2 = ((num2%m2)*(a))%m2;
        cout<<ans1<<" "<<ans2<<endl;
    }
  
    return 0;
}

