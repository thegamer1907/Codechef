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
        vector<ll> even(k+1),odd(k+1);
        for(int i=0;i<=k;i++)
        {
            ll od=0,ev=0;
            for(int j=0;j<a[i].size();j++)
            {
                if(a[i][j]&1)
                    od+=a[i][j];
                else
                    ev+=a[i][j];
            }
            even[i] = ev;
            odd[i]=od;
        }
        while(q--)
        {
            int ty;
            cin>>ty;
            if(ty==1)
            {
                ll pos,val;
                cin>>pos>>val;
                ll pos1 = (pos-1)/sq;
                ll pos2 = (pos-1)%sq;
                a[pos1][pos2]+=val;
                even[pos1]=0;
                odd[pos1]=0;
                for(int j=0;j<a[pos1].size();j++)
                {
                    if(a[pos1][j]&1)
                        odd[pos1]+=a[pos1][j];
                    else
                        even[pos1]+=a[pos1][j];
                }
            }
            else
            {
                ll st,l,r,par;
                cin>>l>>r>>par;
                l--;r--;
                ll pos1 = (l)/sq;
                ll pos2 = (l)%sq;
                ll ans=0;
                ll posr1 = r/sq;
                ll posr2 = r%sq;
                if(pos1==posr1)
                {
                    if(par==1)
                    {
                        for(int i=pos2;i<=posr2;i++)
                        {
                            if(a[pos1][i]&1)
                                ans+=a[pos1][i];
                        }
                    }
                    else
                    {
                        for(int i=pos2;i<=posr2;i++)
                        {
                            if(a[pos1][i]%2==0)
                                ans+=a[pos1][i];
                        }
                    }
                    cout<<ans<<endl;
                }
                else
                {
                    ll ans=0;
                    if(par==1)
                    {
                        for(int i=pos2;i<a[pos1].size();i++)
                        {
                            if(a[pos1][i]&1)
                                ans+=a[pos1][i];
                        }
                        for(int i=pos1+1;i<=posr1-1;i++)
                            ans+=odd[i];
                        for(int i=0;i<=posr2;i++)
                        {
                            if(a[posr1][i]&1)
                                ans+=a[posr1][i];
                        }
                    }
                    else
                    {
                        for(int i=pos2;i<a[pos1].size();i++)
                        {
                            if(a[pos1][i]%2==0)
                                ans+=a[pos1][i];
                        }
                        for(int i=pos1+1;i<=posr1-1;i++)
                            ans+=even[i];
                        for(int i=0;i<=posr2;i++)
                        {
                            if(a[posr1][i]%2==0)
                                ans+=a[posr1][i];
                        }
                    }
                    cout<<ans<<endl;
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
