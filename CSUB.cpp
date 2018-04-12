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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll ch=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]-'0')
                ch++;
        }
        ll ans = (ch*(ch-1))/2;
        ans+=ch;
        cout<<ans<<endl;
    }
    return 0;
}