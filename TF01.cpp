#include<bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
  int sack;  
  int n;
  cin>>n;
  cin>>sack;
  vector<int> w(n+1,0),v(n+1,0);
  for(int i=1;i<=n;i++)
   cin>>w[i],v[i]=w[i];
  int knap[n+1][sack+1];
  memset(knap,0,sizeof(knap));
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=sack;j++)
    {
      if(j-w[i] >=0)
      knap[i][j] = max(v[i] + knap[i-1][j-w[i]],knap[i-1][j]);
      else
       knap[i][j] = max(0,knap[i-1][j]);
    }
  }
  /*
  for(int i=0;i<=n;i++)
  {
    for(int j=0;j<=sack;j++)
     cout<<knap[i][j]<<" ";
    cout<<"\n";
  }*/
  if(knap[n][sack]==sack)
   cout<<"1"<<endl;
  else
   cout<<"0"<<endl;
}
}