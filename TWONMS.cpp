#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
 ll t;
 cin>>t;
 while(t--)
 {
   ll a,b,n;
   cin>>a>>b>>n;
   if(n&1)
    cout<<max(2*a,b)/min(2*a,b)<<endl;
    else
     cout<<max(a,b)/min(a,b)<<endl;
 }
}

