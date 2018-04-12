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
        int n;
        cin>>n;
        int vis[2000] = {0};
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            vis[a[i]]++;
            b[i]=a[i];
        }
        int flag=1;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0 || vis[i]>1)
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
        flag=0;
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
