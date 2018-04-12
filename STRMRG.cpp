#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;


int lcs[6101][6101];

int lcs1(string a,string b)
{
  memset(lcs,0,sizeof(lcs));
  a = "$" +a;
  b = "$" +b;
  for(int i=1;i<a.length();i++)
  {
    for(int j=1;j<b.length();j++)
    {
      if(a[i]==b[j])
       lcs[i][j] = 1+lcs[i-1][j-1];
      else
       lcs[i][j] = max(lcs[i][j-1],lcs[i-1][j]);
    }
  }
  int len = lcs[a.length()-1][b.length()-1];
  return len;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string x,y,a,b;
        cin>>x>>y;
        a.pb(x[0]);
        for(int i=1;i<x.length();i++)
        {
            if(x[i]!=x[i-1])
                a.pb(x[i]);
        }
        b.pb(y[0]);
        for(int i=1;i<y.length();i++)
        {
            if(y[i]!=y[i-1])
                b.pb(y[i]);
        }
        int len = lcs1(a,b);
        cout<<a.length()+b.length()-len<<endl;
    }
    return 0;
}

