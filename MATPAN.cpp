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
    int cost[26];
    for(int i=0;i<26;i++)
        cin>>cost[i];
    string s;
    cin>>s;
    int freq[26] = {0};
    for(int i=0;i<s.length();i++)
        freq[s[i]-'a']++;
    int ans=0;
    for(int i=0;i<26;i++)
    {
        if(freq[i]==0)
            ans+=cost[i];
    }
    cout<<ans<<endl;
    }
}
