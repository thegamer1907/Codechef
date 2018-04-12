#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       vector<ll> a(n);
       for(ll i=0;i<n;i++)
        cin>>a[i];
       sort(a.rbegin(),a.rend());
       int temp=0;
       for(ll i=1;i<n;i++)
       {
           if(a[i]!=a[0])
           {
               temp=a[i];
               break;
           }
       }
       cout<<temp<<endl;
    }
    return 0;
}
