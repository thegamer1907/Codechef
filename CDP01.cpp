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
    ll n;
    cin>>n;
    ll ans=0;
    if(n==0)
    {
        cout<<1;
        return 0;
    }
    while(n)
    {
        if(n%2==0)
            ans++;
        n/=2;
    }
    cout<<(ll)pow(2,ans);
    return 0;
}
