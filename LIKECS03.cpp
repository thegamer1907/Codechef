#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()

using namespace std;

bool myfunc (int i,int j) { return (i<j); }


ll tp[21];

void init()
{
    tp[0]=1;
    for(int i=1;i<=20;i++)
        tp[i]=tp[i-1]*2;
}



int main()
{
    init();
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int vis[k] = {0};
        vector<int> x(n);
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }
        sort(all(x));
        int ct=0;
        for(int i=0;i<k;i++)
        {
            if(!binary_search(all(x),tp[i],myfunc))
            {
                ct++;
            }
        }
        cout<<ct<<endl;
    }
    return 0;
}
