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
        ll a,b;
        cin>>a>>b;
        if((a+b)%5!=0)
        {
            cout<<-1<<endl;
        }
        else
        {
            ll x = (a+b)/5;
            if(a>(2*x))
            {
                cout<<a-(2*x)<<endl;
            }
            else
            {
                cout<<b-(3*x)<<endl;
            }
        }
    }
    return 0;
}
