#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
     cin>>a[i];
    sort(a.begin(),a.end());
    for(ll i=n-2;i>=0;i--)
    {
        if(a[i]<a[n-1])
         {
             cout<<a[i];
             return 0;
         }
    }
    cout<<"0";
    return 0;
}