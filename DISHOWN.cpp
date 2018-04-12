#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;
ll a[20000];
ll po[20000];


void init(int n)
{
    for(int i=1;i<=n;i++)
    {
        a[i] = i;
    }
    for(int i=1;i<=n;i++)
        cin>>po[i];
}

int fin(int s)
{
    while(a[s]!=s)
    {
        a[s] = a[a[s]];
        s = a[s];
    }
    return s;
}

void uni(int a1,int b1,int p1,int p2)
{
    if(po[a1]==po[b1])
        return;
    if(po[a1] > po[b1])
        a[b1] = a1;
    else
        a[a1] = b1;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        init(n);
        int q;
        cin>>q;
        while(q--)
        {
            int tq;
            cin>>tq;
            if(tq==0)
            {
                int x,y;
                cin>>x>>y;
                int o1 = fin(x);
                int o2 = fin(y);
                if(o1==o2)
                    cout<<"Invalid query!"<<endl;
                else
                    uni(o1,o2,x,y);
            }
            else
            {
                int x;
                cin>>x;
                cout<<fin(x)<<endl;
            }
        }
    }
    return 0;
}

