#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,d,sum=0;
        cin>>n>>d;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        ll exp=sum/n;
        ll ans=0;
        for(ll i=0;i+d<n;i++)
        {
            ans+=abs(exp-a[i]);
            ll x = exp-a[i];
            a[i]=exp;
            a[i+d]-=x;
        }
        int flag=1;
        for(int i=0;i<n;i++)
        {
            //cout<<a[i]<<" ";
            if(a[i]!=exp)
                flag=0;
        }
        if(flag)
         cout<<ans<<endl;
        else
         cout<<-1<<endl;
    }
}
