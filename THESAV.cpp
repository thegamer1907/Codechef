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
        for(int i=0;i<s.length()-2;i++)
        {
            if(s[i]=='*')
            {
                s[i+1]='7';
                s[i+2]='7';
            }
        }
        int flag=1;
        for(int i=0;i<s.length()-2;i++)
        {
            if(s[i]=='0')
            {
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
