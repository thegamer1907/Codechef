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
        ll n,c,h,x,y;
        cin>>n>>c>>h;
        for(ll i=0;i<2*n;i++)
        {
            cin>>x>>y;
        }
        string a,b;
        a.pb('0');
        b.pb('1');
        for(int i=1;i<n;i++)
        {
            a.pb('1');
            b.pb('0');
        }
        cout<<a<<endl;
        for(int i=1;i<n;i++)
            cout<<b<<endl;
    }
    return 0;
}
