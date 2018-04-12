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
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        vector<string> fin[k+1];
        string s,a;
        map<string,int> r;
        map<string,int> tc;
        for(int i=0;i<n;i++)
        {
            cin>>s>>a;
            tc[a]++;
            if(tc[a]<=k)
            {
                fin[tc[a]].pb(s);
                r[s]=i;
            }
        }
        int sz=0;
        for(int i=1;i<=k;i++)
        {
            sz+=fin[i].size();
        }
        if(sz<m)
        {
            cout<<"Impossible"<<endl;
            continue;
        }
        else
        {
            vector<pair<int,string> > ans;
            int sz=0;
            for(int i=1;i<=k;i++)
            {
                sz+=fin[i].size();
                if(sz<=m)
                {
                for(int j=0;j<fin[i].size();j++)
                {
                    ans.pb(mp(r[fin[i][j]],fin[i][j]));
                }
                }
                else
                {
                    sz-=fin[i].size();
                    int req = m-sz;
                    for(int j=0;j<req;j++)
                    {
                        ans.pb(mp(r[fin[i][j]],fin[i][j]));
                    }
                    break;
                }
            }
            sort(all(ans));
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i].ss<<endl;
            }
        }
    }
    return 0;
}
