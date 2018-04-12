#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

struct p
{
    ll r,min1,max1,time;
    string is,col;

};

bool chk(p d1,p d2)
{
    if(d1.r>=d2.min1 && d1.r<=d2.max1)
    {
        if(d2.r>=d1.min1 && d2.r<=d1.max1)
        {
            if(d1.time==d2.time)
            {
                if(d1.is==d2.is)
                {
                    if((d1.col=="random" && d1.col==d2.col) || (d1.col=="white" && d2.col=="black") || (d2.col=="white" && d1.col=="black"))
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll vis[n] = {0};
        vector<ll> fin(n,INT_MAX);
        vector<p> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i].r>>a[i].min1>>a[i].max1>>a[i].time>>a[i].is>>a[i].col;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(vis[j]==0)
                {
                    if(chk(a[i],a[j]))
                    {
                        vis[i] = 1;
                        vis[j] = 1;
                        fin[i] = j;
                        break;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(fin[i]==INT_MAX)
                cout<<"wait"<<endl;
            else
                cout<<fin[i]+1<<endl;
        }
    }
    return 0;
}

