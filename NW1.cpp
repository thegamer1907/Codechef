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
        int w;
        string st;
        cin>>w>>st;
        int freq[7] = {0};
        int pos;
        if(st=="mon")
            pos=0;
        else if(st=="tues")
            pos=1;
        else if(st=="wed")
            pos=2;
        else if(st=="thurs")
            pos=3;
        else if(st=="fri")
            pos=4;
        else if(st=="sat")
            pos=5;
        else if(st=="sun")
            pos=6;
        while(w)
        {
            freq[pos]++;
            pos++;
            if(pos==7)
                pos=0;
            w--;
        }
        for(int i=0;i<7;i++)
            cout<<freq[i]<<" ";
        cout<<endl;
    }
    return 0;
}

