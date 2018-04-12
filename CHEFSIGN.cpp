#include<bits/stdc++.h>
#define ll long long int


using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int m=0,cnt=0;
        char curr;
        int i=0;
        while(s[i]=='=')
            i++;
        curr = s[i];
        for(;i<s.length();i++)
        {
            if(s[i]=='=')
                continue;
            if(s[i]==curr)
            {
                cnt++;
            }
            else
            {
                if(cnt>m)
                    m=cnt;
                cnt=1;
                if(curr=='<')
                    curr = '>';
                else
                    curr = '<';
            }
        }
        if(cnt>m)
            m=cnt;
        cout<<m+1<<endl;
    }
}
