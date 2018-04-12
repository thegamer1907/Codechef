#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

vector<int> a[3005];
vector<int> dp[3005];
int vis[3005];

void dfs(int s,int p)
{
    vis[s]=1;
    for(int i=0;i<a[s].size();i++)
    {
        if(!vis[a[s][i]] && a[s][i]!=p)
        {
            dfs(a[s][i],s);
        }
    }
    vector<int> d;
    int pos=-1;
    for(int i=0;i<a[s].size();i++)
    {
        if(a[s][i]!=p)
        {
            d=dp[a[s][i]];
            pos=i;
            break;
        }
    }
    for(int i=0;i<a[s].size();i++)
    {
        if(a[s][i]==p || i==pos)
            continue;
        vector<int> te(d.size()+dp[a[s][i]].size()-1,4000);
        for(int j=0;j<d.size();j++)
        {
            for(int k=0;k<dp[a[s][i]].size();k++)
            {
                te[j+k] = min(te[j+k],d[j]+dp[a[s][i]][k]);
            }
        }
        d=te;
    }
    if(pos!=-1)
    {
        d[d.size()-1] = 1;
        dp[s] = d;
    }
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,u,v;
    cin>>n;
    if(n==1)
    {
        cout<<0;
        return 0;
    }
    for(int i=1;i<n;i++)
    {
        cin>>u>>v;
        a[u].pb(v);
        a[v].pb(u);
    }
    //cout<<"df";
    vector<int> ch;
    for(int i=1;i<=n;i++)
    {
        if(a[i].size()==1)
        {
            ch.pb(i);
        }
    }
    srand(time(NULL));
    int fin = 10e9;
    for(int i=0;i<20;i++)
    {
        memset(vis,0,sizeof(vis));
        for(int j=0;j<3005;j++)
        {
            dp[j].clear();
        }
        int x = ch[rand()%ch.size()];
        for(int j=0;j<ch.size();j++)
        {
            if(ch[j]!=x)
            {
                dp[ch[j]].pb(0);
                dp[ch[j]].pb(1);
            }
        }
        dfs(x,-1);
        fin = min(fin,dp[x][ch.size()/2]);
    }
    cout<<fin;
    return 0;
}

/*
6
1 2
1 3
1 4
1 5
1 6
1 7
*/

/*
15
1 2
1 3
2 4
2 5
3 6
3 7
4 8
4 9
5 10
5 11
6 12
6 13
7 14
7 15
*/
