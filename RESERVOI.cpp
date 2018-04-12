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
        int n,m;
        cin>>n>>m;
        char a[n+2][m+2];
        for(int i=0;i<n+1;i++)
            for(int j=0;j<=m+1;j++)
              a[i][j]='A';
        for(int i=0;i<=m+1;i++)
            a[n+1][i]='O';
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
             cin>>a[i][j];
        int f=1;
        /*for(int i=0;i<=n+1;i++)
        {
            for(int j=0;j<=m+1;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }*/
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(a[i][j]=='W')
                {
                    if(a[i][j-1]=='A' || a[i][j+1]=='A' || a[i+1][j]=='A')
                    {
                        f=0;
                        //cout<<"here1";
                        break;
                    }
                }
                else if(a[i][j]=='B')
                {
                    if(a[i+1][j]=='A' || a[i+1][j]=='W')
                    {
                        f=0;
                        //cout<<"here2";
                        break;
                    }
                }
            }
                if(!f)
                    break;
        }
        if(f)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
