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
        int n,k;
        cin>>n>>k;
        if(k%3==0)
        {
            if((n-k)>=3)
                cout<<"no"<<endl;
            else
                cout<<"yes"<<endl;
        }
        else
            cout<<"yes"<<endl;
    }
}
