#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll k;
        cin>>k;
        while(k%4==0)
            k=k/4;
        string s = " aac acc";
        cout<<s[k%8]<<endl;
    }
    return 0;
}