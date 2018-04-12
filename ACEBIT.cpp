#include<bits/stdc++.h>
#define ll unsigned long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;



ll co(ll n)
{
  ll count = 0;
  while (n)
  {
    count += n & 1;
    n >>= 1;
  }
  return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<co(n)<<endl;
    }
    return 0;
}
