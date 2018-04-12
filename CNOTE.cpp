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
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        int cost = INT_MAX;
        int need = x-y;
        int p,c;
        for(int i=0;i<n;i++)
        {
            cin>>p>>c;
            if(p>=need)
                cost = min(cost,c);
        }
        if(cost<=k)
            cout<<"LuckyChef"<<endl;
        else
            cout<<"UnluckyChef"<<endl;
    }
    return 0;
}
