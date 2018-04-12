#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

int rpos(ll x)
{
    switch(x)
    {
        case 99991: return 0;
        case 99992: return 1;
        case 99993: return 2;
        case 99994: return 3;
        case 99995: return 4;
        case 99996: return 5;
        case 99997: return 6;
        case 99998: return 7;
        case 99999: return 8;
        case 100000: return 9;
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    ll ans[10][2] = { 42953,53871,
                      42952,99999,
                      42952,67958,
                      42951,99999,
                      42951,82049,
                      42950,99999,
                      85901,92293,
                      85900,99999,
                      42949,99999,
                      42949,67294
                    };
    while(t--)
    {
        ll n;
        cin>>n;
        int pos = rpos(n);
        for(ll i=0;i<n-1;i++)
            cout<<ans[pos][0]<<" ";
        cout<<ans[pos][1]<<endl;
    }
}




