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
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n,k;
        vector<string> a;
        int vis[26] = {0};
        for(int i=0;i<s.length();i++)
            vis[s[i]-'a']++;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            string g;
            cin>>g;
            int vis2[26] = {0};
            for(int i=0;i<g.length();i++)
            {
                vis2[g[i]-'a']++;
            }
            int ans=0;
            for(int i=0;i<26;i++)
            {
                if(vis[i] && vis2[i])
                    ans++;
            }
            if(ans>=k)
                a.pb(g);
        }
        if(a.size())
        {
            cout<<"Yes"<<endl;
            for(int i=0;i<a.size();i++)
                cout<<a[i]<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    return 0;
}
