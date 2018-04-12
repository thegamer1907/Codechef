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
        int n,m,c;
        cin>>n>>m>>c;
        int a[n][m];
        int g;
        vector<int> te;
        for(int i=1;i<=c;i++)
        {
            cin>>g;
            for(int j=0;j<g;j++)
                te.push_back(i);
        }
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
            for(int j=0;j<m;j++)
            {
                a[i][j] = te[k++];
            }
            }
            else
            {
                for(int j=m-1;j>=0;j--)
                {
                   a[i][j] = te[k++];
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cout<<a[i][j]<<" ";
            cout<<"\n";
        }
    }
}
