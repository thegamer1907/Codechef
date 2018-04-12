#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;


string alt(int n)
{
    string a = "0110";
    int k;
    string ans;
    k=0;
    for(int i=0;i<n;i++)
    {
        ans.pb(a[k]);
        k++;
        if(k==4)
            k=0;
    }
    return ans;
}


string func(int n,int x)
{
    int n1 = n+1;
    int x1 = x+1;
    if(n&1)
    {
        if(n1%4!=0)
        {
            if(x%2==0)
                return "2";
            else
            {
                return alt(n-1);
            }
        }
        else
        {
            if(x&1)
                return "2";
            else if(x%4==0)
            {
                return alt(n-1);
            }
            else
            {
                if(x!=(n-1))
                {
                    string temp = alt(n-1);
                    swap(temp[n-2],temp[n-3]);
                    return temp;
                }
                else
                {
                    string temp = alt(n-1);
                    swap(temp[0],temp[1]);
                    return temp;
                }
            }
        }
    }
    else
    {
        if(n%4==0)
        {
            if(x&1)
                return "2";
            else
                return ("0" + alt(n-2));
        }
        else
        {
            if(x%2==0)
                return "2";
            else
            {
                if(x1%4==0)
                {
                    return ("0" + alt(n-2));
                }
                else
                {
                    if(x!=(n-1))
                    {
                        string temp = alt(n-2);
                        swap(temp[n-3],temp[n-4]);
                        return ("0" + temp);
                    }
                    else
                    {
                        return ("1" + alt(n-2));
                    }
                }
            }
        }
    }
}





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        set<int> s;
        s.insert(a);
        s.insert(b);
        s.insert(c);
        s.insert(d);
        map<int,int> m;
        m[a]++;
        m[b]++;
        m[c]++;
        m[d]++;
        if(s.size() == 1 || s.size()==2)
        {
            if(s.size()==2)
            {
                if(m[a] == 2)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
                cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

