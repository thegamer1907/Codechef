#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

vector<ll> conv(2000005);
vector<ll> dp(1000005);


void init()
{
    int a,b,f;
    for(int i=1;i<2000005;i++)
    {
        int x = i;
        a=0;b=0;
        while(x)
        {
            f=x%10;
            if(f%2==0)
            {
                a+=f;
            }
            else{
                b+=f;
            }
            x/=10;
        }
        conv[i] = abs(a-b);
    }
}

void solve()
{
    dp[1] = 2;
    dp[2] = 12;
    dp[3] = 36;
    for(int i=4;i<1000005;i++)
    {
        dp[i] = (dp[i-1]-dp[i-2]) + 2*(conv[2*i-1] - conv[i]) + conv[2*i] + conv[2*i-2] + dp[i-1];
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    init();
    solve();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }
    return 0;
}

