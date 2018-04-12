#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<pair<int,int> > a(m);
        for(int i=0;i<m;i++)
            cin>>a[i].ff>>a[i].ss;
        int ans[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>ans[i][j];
            }
        }
        for(int i=0;i<m;i++)
        {
            int x = rand() % (a[i].ss - a[i].ff + 1) + a[i].ff;
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}

