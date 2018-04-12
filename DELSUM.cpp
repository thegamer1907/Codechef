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
        int n,d;
        cin>>n>>d;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        int sum=0;
        for(int i=0;i<n-d;i++)
            sum+=a[i];
        cout<<sum<<endl;
    }
}
