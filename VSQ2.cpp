#include<bits/stdc++.h>
#define ll long long int
#define m %1000000007


using namespace std;

ll der[100005];

void countDer(ll n)
{
    der[0] = 1;
    der[1] = 0;
    der[2] = 1;
    for (ll i=3; i<=n; ++i)
        der[i] = ((i-1)*(((der[i-1]m) + (der[i-2]m))m))m;
}


int main()
{
    countDer(100001);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<der[n]<<endl;
    }
}
