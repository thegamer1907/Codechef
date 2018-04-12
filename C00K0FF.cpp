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
        ll n;
        string s;
        cin>>n;
        map<string,ll> c;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            c[s]++;
        }
        if(c["cakewalk"]>0)
        {
            if(c["simple"]>0)
            {
                if(c["easy"]>0)
                {
                    if(c["easy-medium"]>0 || c["medium"]>0)
                    {
                        if(c["medium-hard"]>0 || c["hard"]>0)
                        {
                            cout<<"Yes"<<endl;
                            continue;
                        }
                    }
                }
            }
        }
        cout<<"No"<<endl;
    }
    return 0;
}
