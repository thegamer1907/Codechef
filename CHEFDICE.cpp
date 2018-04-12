#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

bool chk(vector<char> s)
{
    for(int i=0;i<6;i++)
    {
        if(s[i]-'0' == i+1)
            return false;
    }
    for(int i=0;i<6;i++)
    {
        if(s[(s[i]-'0')-1]-'0'!=i+1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string m;
        char c;
        for(int i=0;i<n;i++)
        {
            cin>>c;
            m.pb(c);
        }
        int g=0;
        for(int i=0;i<m.size()-1;i++)
        {
            if(m[i]==m[i+1])
            {
                cout<<-1<<endl;
                g=1;
                break;
            }
        }
        if(g)
            continue;
    vector<char> s(6);
    s[0]='1';s[1]='2';s[2]='3';s[3]='4';s[4]='5';s[5]='6';
    int f1=0;
    do
    {
        if(!chk(s))
            continue;
        int flag=1;
        for(int i=0;i<6;i++)
        {
            string se,se1;
            se.pb((char)((i+1)+'0'));
            se.pb(s[i]);
            se1.pb(se[1]);
            se1.pb(se[0]);
            if(m.find(se)>=0 && m.find(se)<m.length())
            {
                flag=0;
                break;
            }
            else if(m.find(se1)>=0 && m.find(se1)<m.length())
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            for(int i=0;i<6;i++)
            {
                cout<<s[i]<<" ";
            }
            f1=1;
            cout<<endl;
            break;
        }
    }while(next_permutation(all(s)));
        if(!f1)
        cout<<-1<<endl;
    }

    return 0;
}
