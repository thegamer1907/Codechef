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
        int n;
        cin>>n;
        vector<int> coal(n),tax(n-1),policy(n-1),tocoal(n);
        for(int i=0;i<n;i++)
        {
            cin>>coal[i];
            if(i!=0)
            {
                tocoal[i] = tocoal[i-1]+coal[i];
            }
            else
            {
                tocoal[i]=coal[i];
            }
        }
        for(int i=0;i<n-1;i++)
            cin>>tax[i];
        for(int i=0;i<n-1;i++)
            cin>>policy[i];
        int dp[n];
        dp[0]=0;
        for(int i=1;i<n;i++)
        {
            if(policy[i-1]==1)
                dp[i] = dp[i-1]+tax[i-1];
            else
                dp[i] = dp[i-1]+(2*tax[i-1]);
        }
        int finans=0;
        for(int i=0;i<n;i++)
        {
            finans = max(finans,tocoal[i]-dp[i]);
        }
        cout<<finans<<endl;
    }
    return 0;
}
