#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

bool chk(string s)
{
    sort(all(s));
    if(s=="cefh")
        return true;
    else
        return false;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans=0;
        if(s.length() < 4)
        {
            cout<<"normal"<<endl;
            continue;
        }
        for(int i=0;i<s.length()-3;i++)
        {
            string d;
            for(int j=i;j<i+4;j++)
            {
                d.pb(s[j]);
            }
            if(chk(d))
                ans++;
        }
        if(ans==0)
            cout<<"normal"<<endl;
        else
            cout<<"lovely"<<" "<<ans<<endl;
    }
    return 0;
}
