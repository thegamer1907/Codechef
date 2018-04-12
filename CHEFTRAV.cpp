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
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<string,string> m;
        map<string,int> sd;
        vector<string> v;
        string s;
        for(int i=0;i<2*n;i++)
        {
            cin>>s;
            v.pb(s);
            if(i%2==0)
                sd[s]+=1;
            else
                sd[s]+=2;
        }
        for(int i=0;i<2*n;i+=2)
        {
            m[v[i]]=v[i+1];
        }
        string st;
        for(int i=0;i<2*n;i++)
        {
            if(sd[v[i]]==1)
            {
                st = v[i];
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<st<<"-"<<m[st]<<" ";
            st=m[st];
        }
    }
    return 0;
}
