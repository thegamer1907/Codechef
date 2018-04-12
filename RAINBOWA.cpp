#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[8] = {0};
        int a1[8] = {0};
        int n;
        cin>>n;
        vector<int> b(n);
        bool vis[8];
        memset(vis,false,sizeof(vis));
        set<int> s;
        int pos7;
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            vis[b[i]]=true;
            s.insert(b[i]);
            if(b[i]==7)
                pos7=i;
        }
        int flag=1;
        for(int i=1;i<=7;i++)
        {
            if(!vis[i])
            {
                flag=0;
            }
        }
        if(!flag)
        {
            cout<<"no"<<endl;
            continue;
        }
        if(s.size()>7)
        {
            cout<<"no"<<endl;
            continue;
        }
        memset(vis,false,sizeof(vis));
        flag=1;
        vector<int> c,d;
        for(int i=0;i<=pos7;i++)
        {
            c.push_back(b[i]);
        }
        for(int i=n-1;i>pos7;i--)
        {
            d.push_back(b[i]);
        }
        sort(c.begin(),c.end());
        sort(d.begin(),d.end());
        flag=1;
        for(int i=0;i<=pos7;i++)
        {
            if(c[i]!=b[i])
            {
                flag=0;
                break;
            }
        }
        if(!flag)
        {
            cout<<"no"<<endl;
            continue;
        }
        flag=1;
        for(int i=n-1,j=0;i>pos7;i--,j++)
        {
            if(d[j]!=b[i])
            {
                flag=0;
                break;
            }
        }
        if(!flag)
        {
            cout<<"no"<<endl;
            continue;
        }
        for(int i=0;i<=pos7;i++)
        {
            a[b[i]]++;
        }
        for(int i=n-1;i>pos7;i--)
        {
            a1[b[i]]++;
        }
        flag=1;
        for(int i=1;i<=6;i++)
        {
            if(a[i]!=a1[i])
            {
                flag=0;
            }
        }
        if(!flag)
        {
            cout<<"no"<<endl;
            continue;
        }
        cout<<"yes"<<endl;
    }
}
