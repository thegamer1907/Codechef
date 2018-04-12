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
        int vis[10] = {0};
        string ans;
        for(int i=0;i<s.length();i++)
            vis[s[i]-'0']++;
        for(char i='A';i<='Z';i++)
        {
            int x=i;
            if(x==66 || x==77 || x==88)
                continue;
            if(vis[x%10] && vis[(x/10)%10])
                ans.pb(i);
        }
        if(vis[6]>1)
            ans.pb((char)66);
        if(vis[7]>1)
            ans.pb((char)77);
        if(vis[8]>1)
            ans.pb((char)88);
        sort(all(ans));
        cout<<ans<<endl;
    }
}
