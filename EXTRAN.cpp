#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        //vector<ll> b(n+1);
        for(ll i=0;i<n;i++)
         cin>>a[i];
        sort(a.begin(),a.end());
        ll value;
        for(ll i=0;i<n-1;i++)
        {
            if(!(a[i]+1==a[i+1]))
             {
                 if(a[i]==a[i-1]+1)
                 {value=a[i+1];break;}
                 else
                 {value=a[i];break;}
                 
             }
        }
        cout<<value<<endl;
    }

	return 0;
}
