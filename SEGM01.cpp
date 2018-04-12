#include <bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ind=0;
        int c1=0;
        for(int i=0;i<s.length();i++)
         {
             if(s[i]=='1')
              c1++;
         }
        if(c1==0)
         {cout<<"NO"<<endl;continue;}
        else if(c1==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            int tp=0;
            while(s[ind]=='0')
             ind++;
            for(int i=ind;i<s.length();i++)
            {
                if(s[i]=='0')
                 break;
                else
                 tp++;
            }
            if(tp==c1)
             cout<<"YES"<<endl;
            else
             cout<<"NO"<<endl;
        
    }
    }
    return 0;
}
