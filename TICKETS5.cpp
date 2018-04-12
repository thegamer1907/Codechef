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
        char a,b;
        a=s[0];b=s[1];
        if(a==b)
        {
            cout<<"NO"<<endl;
            continue;
        }
        char st=a;
        int flag=1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==st)
            {
                if(st==a)
                    st=b;
                else
                    st=a;
            }
            else
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
