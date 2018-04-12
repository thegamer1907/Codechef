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
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int ans = a[0];
        for(int i=1;i<n;i++)
        {
            ans=ans|a[i];
        }
        cout<<ans<<endl;
    }
}
