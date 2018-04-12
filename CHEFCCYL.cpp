#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

int mind(vector<int>& a,ll st,ll en)
{
    if(st>en)
        swap(st,en);
    return min(a[en]-a[st],a[0]-(a[en]-a[st]));
}



int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q,x,u,v,w;
        cin>>n>>q;
        vector<int> a[n+1];
        vector<int> dpin[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            a[i].resize(x+1);
            dpin[i].resize(x+1);
            u=0;
            dpin[i][1]=0;
            for(int j=1;j<=x;j++)
            {
                cin>>a[i][j];
                u+=a[i][j];
                if(j!=1)
                {
                    dpin[i][j] = dpin[i][j-1] + a[i][j-1];
                }
            }
            dpin[i][0] = u;
        }
        vector<pair<int,int> > con(n+1),exen(n+1);
        vector<int> big((2*n)+1);
        for(int i=1;i<=n;i++)
        {
            cin>>con[i].ff>>con[i].ss>>w;
            big[(2*i)] = w;
            if(i!=1)
            {
                big[(2*i)-1] = mind(dpin[i],con[i-1].ss,con[i].ff);
                exen[i] = mp(con[i-1].ss,con[i].ff);
            }
        }
        big[1] = mind(dpin[1],con[n].ss,con[1].ff);
        exen[1] = mp(con[n].ss,con[1].ff);
        vector<int> dpout((2*n)+1);
        dpout[0]=0;
        for(int i=1;i<=2*n;i++)
        {
            dpout[i] = dpout[i-1]+big[i];
        }
        while(q--)
        {
            pair<int,int> i1,i2;
            cin>>i1.ff>>i1.ss>>i2.ff>>i2.ss;
            if(i1.ss>i2.ss)
                swap(i1,i2);
            /*if(i1.ss==1)
            {

            }
            else if(i2.ss==n)
            {

            }
            else*/
            {
                int ans1 = mind(dpin[i1.ss],i1.ff,exen[i1.ss].ss);
                ans1+= dpout[2*(i2.ss-1)] - dpout[(2*(i1.ss))-1];
                ans1+= mind(dpin[i2.ss],exen[i2.ss].ff,i2.ff);

                int ans2 = dpout[2*(i1.ss-1)];
                ans2+=mind(dpin[i1.ss],exen[i1.ss].ff,i1.ff);
                ans2+=mind(dpin[i2.ss],i2.ff,exen[i2.ss].ss);
                ans2+= dpout[2*n] - dpout[(2*i2.ss)-1];
                cout<<min(ans1,ans2)<<endl;
            }
        }
    }
    return 0;
}
