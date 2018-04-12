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
        string s;
        //set<char> f;
        cin>>s;
        ll ans=0;
        ll cnt=1;
        string tp;
        tp.pb(s[0]);
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
            {
                cnt++;
            }
            else
            {
                tp.pb(s[i]);
                ans+= (cnt*(cnt-1))/2;
                cnt=1;
            }
        }
        ans+= (cnt*(cnt-1))/2;
        if(tp.length()<3)
        {
            cout<<ans<<endl;
            continue;
        }
        for(int i=0;i<=(tp.length()-3);i++)
        {
            if(tp[i]==tp[i+2])
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
