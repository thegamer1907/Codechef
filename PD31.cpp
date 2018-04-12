#include<bits/stdc++.h>

using namespace std;

vector<int> a[1000];
bool vis[1000];

void dfs(int n)
{
  vis[n]=true;
  for(int i=0;i<a[n].size();i++)
  {
    if(!vis[a[n][i]])
    {
      vis[a[n][i]] = true;
      dfs(a[n][i]);
    }
    else
    {
      cout<<"NO";
      exit(0);
    }
  }
}


int main()
{
  int n,e,u,v;
  cin>>n>>e;
  for(int i=0;i<e;i++)
  {
    cin>>u>>v;
    a[u].push_back(v);
    //a[v].push_back(u);
  }
  memset(vis,false,sizeof(vis));
  dfs(1);
  /*for(int i=1;i<=n;i++)
  {
    if(vis[i])
     cout<<1<<" ";
    else
     cout<<0<<" ";
  }*/
  for(int i=1;i<=n;i++)
   if(!vis[i])
    {
     cout<<"NO";
     return 0;
    }
  cout<<"YES";
}

