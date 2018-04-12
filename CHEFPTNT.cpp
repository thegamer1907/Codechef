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
        int n,m,x,k;
        cin>>n>>m>>x>>k;
        string s;
        cin>>s;
        int odd = 0,even = 0;
        for(auto u : s)
        {
            if(u=='O')
                odd++;
            else
                even++;
        }
        int ans = 0;
        for(int i=1;i<=m;i++)
        {
            if(i&1)
            {
                int d = min(x,min(k,odd));
                if(d > 0)
                {
                    ans+=d;
                    k-=d;
                    odd-=d;
                }
            }
            else
            {
                int d = min(x,min(k,even));
                if(d > 0)
                {
                    ans+=d;
                    k-=d;
                    even-=d;
                }
            }
        }
        if(ans>=n)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}

