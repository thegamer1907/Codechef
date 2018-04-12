#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll ans[100000];

ll m(ll n)
{
    if(n>100000)
    {
        return max((m(n/2) + m(n/3) + m(n/4)),n);
    }
    if(ans[n]!=-1)
    {
        return ans[n];
    }
    else
    {
      if((n/2) + (n/3) + (n/4) <= n)
       {
         ans[n]=n;
         return ans[n];
       }
    else
      {
          ans[n] = (m(n/2) + m(n/3) + m(n/4));
        return ans[n];
      }
    }
}



int main()
{
    memset(ans,-1,sizeof(ans));
    ans[0]=0;
    ans[1]=1;
    ll n;
    while(cin>>n)
    {
        cout<<m(n)<<endl;
    }
    return 0;
}