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
        string s;
        cin>>s;
        int fr[26] = {0};
        vector<int> pos[26];
        for(auto u : s)
        {
            fr[u-'a']++;
        }
        for(int i=0;i<s.length();i++)
        {
            pos[s[i]-'a'].pb(i+1);
        }
        int fl = 0;
        for(int i=0;i<26;i++)
        {
            if(fr[i]&1)
                fl++;
        }
        if(fl > 1)
            cout<<-1<<endl;
        else
        {
            vector<int> ans(s.length());
            vector<int> finpos;
            for(int i=0;i<26;i++)
            {
                if(pos[i].size())
                {
                    if(pos[i].size()%2==0)
                    {
                        for(auto u : pos[i])
                        finpos.pb(u);
                    }
                }
            }
            for(int i=0;i<26;i++)
            {
                if(pos[i].size())
                {
                    if(pos[i].size()%2==1)
                    {
                        for(auto u : pos[i])
                        finpos.pb(u);
                    }
                }
            }
            int k1 = 0,k2=1;
            for(int i=0,j=ans.size()-1;i<ans.size()/2;i++,j--)
            {
                ans[i] = finpos[k1];
                ans[j] = finpos[k2];
                k1+=2;
                k2+=2;
            }
            if(ans.size()&1)
                ans[ans.size()/2] = finpos[k1];
            for(auto u : ans)
                cout<<u<<" ";
            cout<<endl;
        }
    }
    return 0;
}
