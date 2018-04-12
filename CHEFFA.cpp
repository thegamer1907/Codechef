#include<bits/stdc++.h>
#define ll unsigned long long int
#define m 1000000007
/*
1
50
50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50 50
*/

using namespace std;

int dp[151][151];

int two(int x,int y)
{
    if(x==0 || y==0)
        return 1;
    if(dp[x][y]!=0)
        return dp[x][y];
    int ans=0;
    for(int i=0;i<=min(x,y);i++)
    {
         ans+=two(y-i,i);
    }
    return ans;
}
ll mp1[151][151];
ll mp[151][151];

void mpclear()
{
    for(int i=0;i<151;i++)
        for(int j=0;j<151;j++)
         mp[i][j]=0;
}

void mp1clear()
{
    for(int i=0;i<151;i++)
        for(int j=0;j<151;j++)
         mp1[i][j]=0;
}

int main()
{
    for(int i=0;i<151;i++)
    {
        for(int j=0;j<151;j++)
        {
            dp[i][j] = two(i,j);
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        pair<int,int> p;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        for(int i=0;i<=min(a[0],a[1]);i++)
        {
            if(mp[a[1]-i][i]==0)
                mp[a[1]-i][i]=1;
            else
                mp[a[1]-i][i]+=1;
        }
        for(int i=2;i<n;i++)
        {
            if(i%2==0)
            {
            mp1clear();
            for(int i1=0;i1<151;i1++)
            {
                for(int j1=0;j1<151;j1++)
                {
                    if(mp[i1][j1])
                    {
                        p = {i1,j1};
                        ll coun = mp[i1][j1];
                        p.second+=a[i];
                        for(int j=0;j<=min(p.first,p.second);j++)
                        {
                            if(mp1[p.second-j][j]==0)
                              mp1[p.second-j][j]=(1*(coun%m))%m;
                            else
                              mp1[p.second-j][j] = ((mp1[p.second-j][j]%m)+((1*(coun%m))%m))%m;
                        }
                    }
                }
            }
            }
            else
            {
            mpclear();
            for(int i1=0;i1<151;i1++)
            {
                for(int j1=0;j1<151;j1++)
                {
                    if(mp1[i1][j1])
                    {
                        p = {i1,j1};
                        ll coun = mp1[i1][j1];
                        p.second+=a[i];
                        for(int j=0;j<=min(p.first,p.second);j++)
                        {
                            if(mp[p.second-j][j]==0)
                              mp[p.second-j][j]=(1*(coun%m))%m;
                            else
                              mp[p.second-j][j] = ((mp[p.second-j][j]%m)+((1*(coun%m))%m))%m;
                        }
                    }
                }
            }

            }
        }
            //map<pair<int,int>,ll>::iterator it;
            ll finans=0;
            if(n%2==0)
            {
                for(int i=0;i<151;i++)
                {
                    for(int j=0;j<151;j++)
                    {
                        if(mp[i][j])
                        {
                            p = {i,j};
                            ll coun = mp[i][j];
                            finans=  ((finans%m) + ((dp[p.first][p.second]*(coun%m))%m))%m;
                        }
                    }
                }
            }
            else
            {
                for(int i=0;i<151;i++)
                {
                    for(int j=0;j<151;j++)
                    {
                        if(mp1[i][j])
                        {
                            p = {i,j};
                            ll coun = mp1[i][j];
                            finans=  ((finans%m) + ((dp[p.first][p.second]*(coun%m))%m))%m;
                        }
                    }
                }
            }
            cout<<finans<<endl;
            mpclear();
            mp1clear();
    }
}
