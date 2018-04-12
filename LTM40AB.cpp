#include<iostream>
using namespace std;
long long unsigned int min(long long unsigned int a,long long unsigned int b)
{
  if (a<=b)
    return a;
  else
    return b;
}
long long unsigned int max(long long unsigned int a,long long unsigned int b)
{
  if (a>=b)
    return a;
  else
    return b;
}
int main()
{
  long long unsigned int t,a,b,c,d,x,y,i,ans[20];
  cin>>t;
  for (i=0;i<t;i++)
  {
    cin>>a>>b>>c>>d;
    for (x=min(a,b);x<=max(a,b);x++)
      for (y=max(c,d);y>x;y--)
        if (a<=x&&x<=b&&c<=y&&y<=d)
        {
          ans[i]=((y-x)*(y-x+1))/2;
          y=x;
          x=max(a,b);
        }
  }
  for (i=0;i<t;i++)
    cout<<ans[i]<<'\n';
  return 0;
}
