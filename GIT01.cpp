#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

int cost(char a[],int type,int n)
{
    int cost = 0;
    int cr = 5,cg = 3;
    char st;
    if(type==1)
        st = 'R';
    else
        st = 'G';
    for(int i=0;i<n;i++)
    {
        if(a[i]!=st)
        {
            cost+= a[i]=='R'?cr:cg;
        }
        st = st=='R'?'G':'R';
    }
    return cost;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char a[n][m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int ans1 = 0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
                ans1+=cost(a[i],1,m);
            else
                ans1+=cost(a[i],2,m);
        }
        int ans2 = 0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
                ans2+=cost(a[i],2,m);
            else
                ans2+=cost(a[i],1,m);
        }
        cout<<min(ans1,ans2)<<endl;
    }
    return 0;
}

