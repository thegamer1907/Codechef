#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    ll t1;
    cin>>t1;
    while(t1--)
    {
    ll n,k;
    cin>>n>>k;
    ll sum=0,t;
    for(ll i=0;i<n;i++)
    {
        cin>>t;
        sum+=t;
    }
    if(sum&1)
    {
        cout<<"even"<<endl;
    }
    else
    {
        if(k==1)
            cout<<"odd"<<endl;
        else
            cout<<"even"<<endl;
    }
    }
}
