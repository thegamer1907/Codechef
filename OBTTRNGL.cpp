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
        ll n,v1,v2;
        cin>>n>>v1>>v2;
        ll ans;
        if(v2<v1)
            swap(v1,v2);
        //cout<<v1<<" "<<v2;
        if(n%2==0 && ((v2-v1)==(n/2)))
        {
            ans=0;
        }
        else
        {
        ll a1,a2;
        a1 = v2-v1-1;
        a2 = n-v2;
        a2+=v1-1;
        ans = min(a1,a2);
        }
        cout<<ans<<endl;
    }

}
