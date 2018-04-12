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
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        ll c,d,s;
        cin>>c>>d>>s;
        double me = (double)a[max_element(all(a))-a.begin()];
        printf("%lf\n",me*(c-1));
    }
    return 0;
}
