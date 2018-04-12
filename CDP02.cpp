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
    string s;
    cin>>s;
    ll k;
    cin>>k;
    ll ans=0;
    for(int i=0;i<s.length();i++)
    {
        ans+=(s[i]-'0');
    }
    ans = ((ans%9)*(k%9))%9;
    if(ans==0)
        cout<<9;
    else
        cout<<ans;
    return 0;
}
