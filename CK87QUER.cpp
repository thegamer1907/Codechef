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
        ll y;
        cin>>y;
        ll ans=0;
        for(int i=1;i<=min((ll)700,y);i++)
        {
                ans+=((ll)floor(sqrt(y-i)));
        }
        cout<<ans<<endl;
    }
    return 0;
}
