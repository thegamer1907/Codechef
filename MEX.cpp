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
        int n,k,x;
        cin>>n>>k;
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            m[x]++;
        }
        for(int i=0;i<200005;i++)
        {
            if(m[i])
                continue;
            else
            {
                if(k==0)
                {
                    cout<<i<<endl;
                    break;
                }
                else
                    k--;
            }
        }
    }
    return 0;
}
