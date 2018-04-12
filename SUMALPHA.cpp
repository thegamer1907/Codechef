#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            ans+= (s[i]-'a')%5;
        }
        cout<<ans<<endl;
    }
}
