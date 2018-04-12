#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

ll sum(ll n)
{
    ll ans=0;
    while(n)
    {
        ans+=(n%10);
        n/=10;
    }
    return ans;
}

int main()
{
    ll n;
    cin>>n;
    ll c=0;
    ll v=1;
    for(ll i=max(n-97,v);i<=n;i++)
    {
        if((i+sum(i)+sum(sum(i)))==n)
            c++;
    }
    cout<<c;
}
