#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int finans=0,ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(isupper(s[i]))
                s[i]=tolower(s[i]);
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
                ans++;
            else
            {
                finans=max(finans,ans);
                ans=0;
            }
        }
        cout<<finans<<endl;
    }
}
