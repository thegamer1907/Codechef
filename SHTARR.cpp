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
        ll n,q,u;
        cin>>n>>q;
        ll sq = sqrt(n);
        //sq=1;
        vector<ll> in(n);
        vector<ll> a[1005];
        //cout<<sq<<" ";
        ll k=-1;
        for(ll i=0;i<n;i++)
        {
            cin>>in[i];
        }
        for(int i=0;i<n;i++)
        {
            if(i%sq==0)
                k++;
            a[k].pb(in[i]);
        }
        /*for(int i=0;i<=k;i++)
        {
            for(int j=0;j<a[i].size();j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }*/
        vector<ll> dp[k+1];
        for(int i=0;i<=k;i++)
        {
            for(int j=0;j<a[i].size();j++)
            {
                if((dp[i].size()==0) || (dp[i][dp[i].size()-1])<(a[i][j]))
                    dp[i].pb(a[i][j]);
            }
        }
        while(q--)
        {
            char ty;
            cin>>ty;
            if(ty=='+')
            {
                ll pos,val;
                cin>>pos>>val;
                ll pos1 = (pos-1)/sq;
                ll pos2 = (pos-1)%sq;
                a[pos1][pos2]+=val;
                dp[pos1].clear();
                for(int j=0;j<a[pos1].size();j++)
                {
                    if((dp[pos1].size()==0) || (dp[pos1][dp[pos1].size()-1])<(a[pos1][j]))
                        dp[pos1].pb(a[pos1][j]);
                }
            }
            else
            {
                ll st,l,r;
                cin>>st>>l>>r;
                st--;
                ll pos1 = (st)/sq;
                ll pos2 = (st)%sq;
                ll ans=0;
                //cout<<pos1<<" "<<pos2<<endl;
                for(ll i=pos2;i<a[pos1].size();i++)
                {
                    if(l<=a[pos1][i])
                    {
                        ans++;
                        l = a[pos1][i]+1;
                        if(l>r)
                            break;
                    }
                }
                //cout<<ans<<endl;
                if(l>r)
                {
                    cout<<ans<<endl;
                    continue;
                }
                else
                {
                    for(ll i=pos1+1;i<=k;i++)
                    {
                        if(dp[i][dp[i].size()-1]>=r)
                        {
                            int p = lower_bound(all(dp[i]),l) - dp[i].begin();
                            int p1 = lower_bound(all(dp[i]),r) - dp[i].begin();
                            ans+=(p1-p+1);
                            break;
                        }
                        else
                        {
                            int p = lower_bound(all(dp[i]),l) - dp[i].begin();
                            if(p==dp[i].size())
                                continue;
                            ans+=(dp[i].size()-p);
                            l = dp[i][dp[i].size()-1]+1;
                        }
                        if(l>r)
                            break;
                    }
                    cout<<ans<<endl;
                }
            }
        }
    }
    return 0;
}


/*
1
10 1
1 2 3 4 5 6 7 8 9 10
? 1 8 100
*/
