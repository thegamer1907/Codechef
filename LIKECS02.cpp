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
        int n;
        cin>>n;
        if(n==1)
            cout<<1<<endl;
        else if(n==2)
            cout<<"1 2"<<endl;
        else if(n==3)
            cout<<"1 2 3"<<endl;
        else
        {
            int st = n-(n/2);
            int ct=0;
            while(ct!=n)
            {
                if(st!=n)
                {
                cout<<st<<" ";
                ct++;
                }
                else if(n%2!=0)
                {
                    cout<<st<<" ";
                    ct++;
                }
                st++;
            }
            cout<<endl;
        }
    }
    return 0;
}
