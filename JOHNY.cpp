#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>k;
        ll ele = a[k-1];
        sort(a.begin(),a.end());
        int pos = lower_bound(a.begin(),a.end(),ele) - a.begin();
        cout<<pos+1<<endl;
    }
}
