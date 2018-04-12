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
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(all(a));
        if(n%2==0)
        {
           double n1 = (n/2)-0.5;
           for(int i=0;i<k;i++)
           {
               n1+=0.5;
           }
           cout<<a[(int)floor(n1)]<<endl;
        }
        else
        {
            int n21 = n/2;
            double n2 = n21;
            for(int i=0;i<k;i++)
            {
                n2+=(0.5);
            }
            cout<<a[(int)floor(n2)]<<endl;
        }
    }
    return 0;
}
