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
        vector<int> a(n+1);
        for(int i=1;i<=n;i++)
            a[i]=i;
        for(int i=1;i<n;i+=2)
        {
            swap(a[i],a[i+1]);
        }
        if(n&1)
            swap(a[n-1],a[n]);
        for(int i=1;i<=n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}
