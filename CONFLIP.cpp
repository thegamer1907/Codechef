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
        int g;
        cin>>g;
        while(g--)
        {
            ll i,n,q,nt;
            cin>>i>>n>>q;
            nt = n/2;
            if(i==q)
                cout<<nt<<endl;
            else
                cout<<(n-nt)<<endl;

        }

    }
}
