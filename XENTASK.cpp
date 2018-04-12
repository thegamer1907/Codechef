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
        vector<ll> a(n+1);
        vector<ll> b(n+1);
        ll sum1=0,sum2=0;
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
            if(i%2==0)
             sum1+=a[i];
             else
             sum2+=a[i];
        }
        for(ll i=1;i<=n;i++)
        {
            cin>>b[i];
            if(i%2==0)
             sum2+=b[i];
             else
             sum1+=b[i];
        }
        cout<<min(sum1,sum2)<<endl;
    }

	return 0;
}
