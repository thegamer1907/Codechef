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
        vector<int> a(n);
        vector<int> ans;
        for(int i=0;i<n;i++)
            cin>>a[i];
        ans.pb(a[0]);
        for(int i=1;i<n;i++)
        {
            int pos = upper_bound(all(ans),a[i]) - ans.begin();
            if(pos == ans.size())
                ans.pb(a[i]);
            else
                ans[pos] = a[i];
        }
        cout<<ans.size()<<" ";
        for(auto u : ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}
