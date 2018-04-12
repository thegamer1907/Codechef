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
        string a;
        cin>>a;
        if(a.length()==1)
        {
            cout<<"no"<<endl;
            continue;
        }
        set<char> s;
        for(int i=0;i<a.length();i++)
            s.insert(a[i]);
        if(s.size()==a.length())
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
    return 0;
}
