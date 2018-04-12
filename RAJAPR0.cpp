#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define endl "\n"

using namespace std;

vector<int> a[100005];
vector<int> colo(100005);
int vis[100005];
void dfs(int s,int c)
{
    colo[s]=c;
    vis[s]=1;
    int nc;
    if(c==1)
        nc=0;
    else
        nc=1;
    for(int i=0;i<a[s].size();i++)
    {
        if(!vis[a[s][i]])
        {
            dfs(a[s][i],nc);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,x,y;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cin>>x>>y;
        a[x].pb(y);
        a[y].pb(x);
    }
    dfs(1,1);
    int q;
    cin>>q;
    while(q--)
    {
        cin>>x>>y;
        if(colo[x]^colo[y]==1)
            cout<<"Odd"<<endl;
        else
            cout<<"Even"<<endl;
    }
    return 0;
}
