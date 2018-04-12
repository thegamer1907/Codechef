#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i,a,b;
    cin>>a>>b;
    ll ans=0;
    for(i=1;i<=a;i++)
    {
        ll temp=i*i;
        temp+=b;
        temp=sqrt(temp);
        if(temp>a)
        temp=a;
        ans+=max((ll)0,temp-i);
    }
    cout<<ans;
}
