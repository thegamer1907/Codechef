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
        int n,x;
        cin>>n;
        int fr[1005] = {0};
        for(int i=0;i<n;i++)
        {
            cin>>x;
            fr[x]++;
        }
        vector<int> d;
        int ans;
        for(int i=1004;i>=0;i--)
        {
            if(fr[i]>=4)
            {
                d.pb(i);
            }
            if(fr[i]>=2)
            {
                d.pb(i);
            }
        }
        if(d.size()>=2)
        {
            sort(all(d));
            reverse(all(d));
            cout<<d[0]*d[1]<<endl;
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}

