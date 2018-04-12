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
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                b.pb(a[i]+a[j]);
            }
        }
        sort(all(b));
        long double cnt = 1;int pos=b.size()-2;
        while(b[pos]==b[b.size()-1] && pos>=0)
        {
            cnt++;
            pos--;
        }
        printf("%.10Lf\n",cnt/(long double)b.size());
    }
    return 0;
}

