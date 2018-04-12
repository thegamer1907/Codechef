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
        string s;
        cin>>s;
        int f1[26] = {0};
        int f2[26] = {0};
        for(int i=0,j=s.length()-1;i<s.length()/2;i++,j--)
        {
            f1[s[i]-'a']++;
            f2[s[j]-'a']++;
        }
        int flag=1;
        for(int i=0;i<26;i++)
        {
            if(f1[i]!=f2[i])
                flag=0;
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

