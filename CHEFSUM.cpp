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
            cin>>a[i];
        int pos=1;
        int mi=a[1];
        for(int i=1;i<=n;i++)
        {
            if(a[i]<mi)
            {
                mi=a[i];
                pos=i;
            }
        }
        cout<<pos<<endl;
    }
}
