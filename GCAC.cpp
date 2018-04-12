#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    ll n,m,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<ll> minsal(n);
        vector<ll> offsal(m);
        vector<ll> maxjob(m);
        for(ll i=0;i<n;i++)
        {
            cin>>minsal[i];
        }
        char qual[n][m];
        ll totjob=0;
        ll totsal=0;
        int vis[m] = {0};
        for(ll i=0;i<m;i++)
        {
           cin>>offsal[i]>>maxjob[i];
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
             cin>>qual[i][j];
            }
        }

        for(ll i=0;i<n;i++)
        {
            //q = priority_queue <pair<ll,ll> >();
            ll tf=0;ll pj=0;
            for(int j=0;j<m;j++)
            {
                if(qual[i][j] == '1')
                {
                    if(maxjob[j])
                    {
                        if(offsal[j]>tf)
                            pj=j;
                        tf=max(tf,offsal[j]);
                    }
                }
            }
            if(tf>=minsal[i])
            {
              maxjob[pj]-=1;
              totsal+=tf;
              vis[pj]=1;
              totjob+=1;
            }
        }
        int noj=0;
        for(int i=0;i<m;i++)
        {
            if(!vis[i])
                noj++;
        }
        cout<<totjob<<" "<<totsal<<" "<<noj<<endl;
    }
}
