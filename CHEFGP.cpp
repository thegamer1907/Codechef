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
        string s;
        cin>>s;
        int x,y;
        cin>>x>>y;
        int ca=0,cb=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a')
                ca++;
            else
                cb++;
        }
        vector<int> ans;
        if(ca==cb)
        {
            for(int i=0;i<ca;i++)
                cout<<"ab";
            cout<<endl;
        }
        else if(ca>cb)
        {
            //cout<<ca<<" "<<cb;
            int ca1=cb;
            for(int i=0;i<cb;i++)
            {
                ans.pb(1);
                ans.pb(1);
            }
            ca-=cb;
            for(int i=0;i<ans.size();i+=2)
            {
                if((x-ans[i])==0)
                    break;
                if((x-ans[i])<ca)
                {
                    //cout<<"d";
                    ca-=(x-ans[i]);
                    ans[i]=x;
                }
                else
                {
                    ans[i]+=ca;
                    ca=0;
                    break;
                }
            }
            if(ca)
            {
                int d = ca/x;
                int rem = ca%x;
                //cout<<rem<<endl;
                for(int i=0;i<d;i++)
                {
                    if(i==(d-1) && rem==0)
                    {
                        ans.pb(x);
                        break;
                    }
                    ans.pb(x);
                    ans.pb(-1);
                }
                if(rem)
                    ans.pb(rem);
            }
            for(int i=0;i<2*ca1;i++)
            {
                if(i&1)
                {
                    for(int j=0;j<ans[i];j++)
                        cout<<"b";
                }
                else
                {
                    for(int j=0;j<ans[i];j++)
                        cout<<"a";
                }
            }
            for(int i=(2*ca1);i<ans.size();i++)
            {
                if(ans[i]==-1)
                    cout<<"*";
                else
                {
                    for(int j=0;j<ans[i];j++)
                        cout<<"a";
                }
            }
            cout<<endl;
        }
        else if(cb>ca)
        {
            int cb1=ca;
            for(int i=0;i<ca;i++)
            {
                ans.pb(1);
                ans.pb(1);
            }
            cb-=ca;
            for(int i=0;i<ans.size();i+=2)
            {
                if((y-ans[i])==0)
                    break;
                if((y-ans[i])<cb)
                {
                    cb-=(y-ans[i]);
                    ans[i]=y;
                }
                else
                {
                    ans[i]+=cb;
                    cb=0;
                    break;
                }
            }
            if(cb)
            {
                int d = cb/y;
                int rem = cb%y;
                for(int i=0;i<d;i++)
                {
                    if(i==(d-1) && rem==0)
                    {
                        ans.pb(y);
                        break;
                    }
                    ans.pb(y);
                    ans.pb(-1);
                }
                if(rem)
                    ans.pb(rem);
            }
            for(int i=0;i<2*cb1;i++)
            {
                if(i&1)
                {
                    for(int j=0;j<ans[i];j++)
                        cout<<"a";
                }
                else
                {
                    for(int j=0;j<ans[i];j++)
                        cout<<"b";
                }
            }
            for(int i=(2*cb1);i<ans.size();i++)
            {
                if(ans[i]==-1)
                    cout<<"*";
                else
                {
                    for(int j=0;j<ans[i];j++)
                        cout<<"b";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
