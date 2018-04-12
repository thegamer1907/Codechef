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
        string a,b;
        cin>>a>>b;
        if(a.length()>b.length())
            swap(a,b);
        string ans;
        for(int i=a.length()-1,j= b.length()-1;i>=0;i--,j--)
        {
            int x = (a[i]-'0')+(b[j]-'0');
            //cout<<x<<endl;
            x%=10;
            //cout<<x;
            ans.pb(x+'0');
        }
        for(int i=b.length()-a.length()-1;i>=0;i--)
            ans.pb(b[i]);
        reverse(all(ans));
        int i=0;
        while(ans[i]=='0')
            i++;
        for(int j=i;j<ans.length();j++)
            cout<<ans[j];
        if(i==ans.length())
        {
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}
