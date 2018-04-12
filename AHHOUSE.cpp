#include <bits/stdc++.h>
#include<algorithm>
#include<queue>

int pf[100][100];
int pt[100][100];


using namespace std;


bool comp(pair<int,int> a,pair<int,int> b)
{
    if(a.first>b.first)
        return false;
    else if(a.first==b.first)
    {
        if(a.second>b.second)
            return false;
        else
            return true;
    }
    return true;
}
void shortest_path(int a,int b,int xy,int xx)
{
    std::vector<std::vector<bool> >vis;
    vis.resize(100, std::vector<bool> (100,false));
    priority_queue< pair<pair<int,int>,pair<int,int> >, vector<pair<pair<int,int>,pair<int,int> > >, greater<pair<pair<int,int>,pair<int,int> > > >  pq;
    vector<std::vector<pair<int,int> > >dist;
    dist.resize(100, std::vector<pair<int,int> > (100,{INT_MAX,INT_MAX}));
    //dist[0][0] = make_pair(pf[a][b],pt[a][b]);
    dist[a][b] = make_pair(pf[a][b],pt[a][b]);
    //dist[a][b]=make_pair(0,0);
    pq.push(make_pair(dist[a][b],make_pair(a,b)));
    int cnt=0;
    while (!pq.empty()) {
        pair<pair<int,int>,pair<int,int> > p;
        p = pq.top();
        pq.pop();
        int u,v;
        u = p.second.first;
        v = p.second.second;
        if(!vis[u][v])
        {
        //cout<<"started"<<u<<" "<<v<<endl;
        for(int i=-1;i<=1;i++)
        {
            for(int j=-1;j<=1;j++)
            {
                if((i==0 && j==0) || (i==1 && j==-1) || (i==1 && j==1) || (i==-1 && j==1) || (i==-1 && j==-1) || (u+i)>(xy-1) || (v+j)>(xx-1) || (u+i)<0 || (v+j)<0)
                {
                    //cout<<"ignoring"<<u+i<<" "<<v+j<<endl;
                    continue;
                }
                if(vis[u+i][v+j])
                    continue;
                //cout<<"doing"<<u+i<<" "<<v+j<<endl;
                pair<int,int> w = make_pair(pf[u+i][v+j],pt[u+i][v+j]);
                if(!comp(dist[u+i][v+j],make_pair(dist[u][v].first + w.first,dist[u][v].second + w.second)))
                {
                    //cout<<"pushing"<<u+i<<" "<<v+j<<endl;
                    dist[u+i][v+j] = make_pair(dist[u][v].first + w.first,dist[u][v].second + w.second);
                    pq.push(make_pair(dist[u+i][v+j],make_pair(u+i,v+j)));
                }
            }
        }
        vis[u][v] = true;
        }
    }
    cout<<dist[xy-1][xx-1].first<<" "<<dist[xy-1][xx-1].second<<endl;
    /*for(int i=0;i<=xy;i++)
    {
        for(int j=0;j<=xx;j++)
        {
            cout<<" ("<<dist[i][j].first<<","<<dist[i][j].second<<")  ";
        }
        cout<<endl;
    }*/
}

int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
            cin>>pf[i][j];
        }
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
            cin>>pt[i][j];
        }
        shortest_path(0,0,n,m);
    }
    return 0;
}
