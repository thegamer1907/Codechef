#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

void scan(ll &x)
{
    register ll c = getchar_unlocked();
    x = 0;
    for(;(c<48 || c>57);c = getchar_unlocked());
    for(;c>47 && c<58;c = getchar_unlocked()) {x = (x<<1) + (x<<3) + c - 48;}
}



int main()
{
    ll n,q,u;
    scan(n);scan(q);
    ll sq = sqrt(n);
    vector<ll> in(n);
    vector<ll> a[1005];
    ll k=-1;
    for(ll i=0;i<n;i++)
    {
        scan(in[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i%sq==0)
            k++;
        a[k].pb(in[i]);
    }
    vector<ll> dp[k+1];
    vector<int> m[k+1];
    for(int i=0;i<=k;i++)
    {
        dp[i].resize(a[i].size());
        m[i].resize(1048576,0);
        dp[i][0] = a[i][0];
        m[i][dp[i][0]]++;
        for(int j=1;j<a[i].size();j++)
        {
            dp[i][j] = dp[i][j-1]^a[i][j];
            m[i][dp[i][j]]++;
        }
    }
    while(q--)
    {
        int ty;
        cin>>ty;
        if(ty==1)
        {
            ll pos,val;
            scan(pos);scan(val);
            ll pos1 = (pos-1)/sq;
            ll pos2 = (pos-1)%sq;
            a[pos1][pos2] = val;
            for(int j=pos2;j<a[pos1].size();j++)
            {
                m[pos1][dp[pos1][j]]--;
                if(j!=0)
                {
                    dp[pos1][j] = dp[pos1][j-1]^a[pos1][j];
                }
                else
                    dp[pos1][j] = a[pos1][j];
                m[pos1][dp[pos1][j]]++;
            }
        }
        else
        {
            ll pos,k1,ans;
            ans =0;
            scan(pos);scan(k1);
            pos--;
            ll pos1 = (pos)/sq;
            ll pos2 = (pos)%sq;
            ll start = 0;
            for(int i=0;i<pos1;i++)
            {
                ll fin = start^k1;
                ans+=m[i][fin];
                start = start^dp[i][dp[i].size()-1];
            }
            ll fin = start^k1;
            for(int i=0;i<=pos2;i++)
            {
                if(dp[pos1][i]==fin)
                    ans++;
            }
            printf("%lld\n",ans);
        }
    }
    return 0;
}
