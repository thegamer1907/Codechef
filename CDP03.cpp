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
        ll w,h,x,y;
        cin>>w>>h>>x>>y;
        ll g= __gcd(x,y);
        x/=g;
        y/=g;
        ll an = min(w/x,h/y);
        cout<<x*an<<" "<<y*an<<endl;
    }
    return 0;
}
