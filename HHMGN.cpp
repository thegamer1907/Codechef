#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
      ll n,s,sum=0,ans;
      cin>>n>>s;
      vector<ll> a(n),b(n);
      for(ll i=0;i<n;i++)
      {
          cin>>a[i];
          sum+=a[i];
      }
      sort(a.begin(),a.end());
      if(sum==s)
      {
          cout<<a[n-1]<<endl;
          continue;
      }
      else if(s>sum)
      {
          cout<<-1<<endl;
          continue;
      }
      b[n-1]= a[n-1]-a[n-2];
      for(ll i=n-2;i>0;i--)
      {
          b[i] = (a[i]-a[i-1])+(b[i+1])+ ((n-i-1)*(a[i]-a[i-1]));
      }
      int flag=0;
      for(ll i=n-1;i>=1;i--)
       {
           if(sum-b[i] == s)
           {
               ans = a[i-1];
               flag=1;
           }
       }
       if(!flag)
       {
           cout<<"-1"<<endl;
       }
       else
        cout<<ans<<endl;
      //for(int i=1;i<n;i++)
       //cout<<b[i]<<" ";
  }
  return 0;
}