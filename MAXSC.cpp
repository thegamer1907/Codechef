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
        int n;
        cin>>n;
        vector<int> a[n];
        for(int i=0;i<n;i++)
        {
            a[i].resize(n);
            for(int j=0;j<n;j++)
                cin>>a[i][j];
            sort(all(a[i]));
        }
        ll ans = a[n-1][n-1];
        int val = a[n-1][n-1];
        for(int i=n-2;i>=0;i--)
        {
            int pos = lower_bound(all(a[i]),val) - a[i].begin();
            if(pos==0)
            {
                ans = -1;
                break;
            }
            pos--;
            val = a[i][pos];
            ans+=val;
        }
        cout<<ans<<endl;
    }
    return 0;
}
