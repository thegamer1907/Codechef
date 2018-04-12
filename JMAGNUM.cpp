#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define m 1000000007
using namespace std;
vector<ll> cum(1000001);
ll sums(ll val)
{
    ll num,sum=0;
    num = val;
    while (num != 0)
    {
        sum = sum + num % 10;
        num /= 10;
    }
    return sum;
}

void init1()
{
    //cout<<"hi";
    vector<ll> a(1000001,0);
    /*for(ll i=0;i<1000001;i++)
    {
        cout<<a[i]<<" ";
    }*/
    ll now=2;
    ll present=2*now;
    a[2]=2;
    while(now<1000001)
    {
        while(present<1000001)
        {
            a[present]=((a[present]%m)+(a[now]%m))%m;
            present+=now;
        }
        while(now<1000001&&a[now]!=0)
        {
            now++;
        }
        if(now>=1000001)
        {
            break;
        }
        a[now]=sums(now)%m;
        present=2*now;
    }
    for(ll i=1;i<1000001;i++)
    {
        cum[i]=((cum[i-1]%m)+(a[i]%m))%m;
    }
}

void solve()
{
    ll l,r;
    cin>>l>>r;
    cout<<(cum[r]-cum[l-1]+m)%m<<"\n";
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    init1();
    ll t;
    cin>>t;
    while(t--)
    {
       solve();
    }
    return 0;
}
