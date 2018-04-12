#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll i,j,count1;
        ll final=0;
        for(i=0;i<n;i=j)
      {
          count1=0;
          for(j=i;j<n;j++)
          {
              if(a[i]==a[j])
                count1++;
              else
                break;
          }
          final+= ((count1)*(count1+1))/2;
      }
      cout<<final<<endl;
    }
    return 0;
}