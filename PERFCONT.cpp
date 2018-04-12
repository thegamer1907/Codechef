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
        int n,p;
        cin>>n>>p;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
            int cake=0,hard=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]>=(p/2))
                    cake++;
                if(a[i]<=(p/10))
                    hard++;
            }
            if(cake==1 && hard==2)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
    }
    return 0;
}
