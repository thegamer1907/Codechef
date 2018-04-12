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
        int n,m,te;
        cin>>n>>m;
        vector<int> a(n+1,0);
        for(int i=0;i<m;i++)
        {
            cin>>te;
            a[te]=1;
        }
        vector<int> rem;
        for(int i=1;i<=n;i++)
            if(a[i]==0)
                rem.push_back(i);
        sort(rem.begin(),rem.end());
        vector<int> l,sl;
        for(int i=0;i<rem.size();i++)
        {
            if(i&1)
                sl.push_back(rem[i]);
            else
                l.push_back(rem[i]);
        }
        for(int i=0;i<l.size();i++)
            cout<<l[i]<<" ";
        cout<<endl;
        for(int i=0;i<sl.size();i++)
            cout<<sl[i]<<" ";
        cout<<endl;
    }
}
