#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[1004][1004];
#define MOD 1000000007

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
ll t;
cin>>t;
while(t--)
{
ll n,m,q,a,b;
cin>>n>>m>>q;
if(n%q==0)
 a=n;
else
{
    a = (q - (n%q))+n;
}
b = (m - (m%q));

ll ans = ((b/q)-(a/q))+1;
cout<<ans<<endl;
}
return 0;
}