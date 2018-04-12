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
    int h1,h2,h3,m1,m2,m3;
    scanf("%2d:%2d",&h1,&m1);
    scanf("%2d:%2d",&h2,&m2);
    scanf("%2d:%2d",&h3,&m3);
    if(h2==h3)
        cout<<m2-m3<<endl;
    else
    {
        cout<<60-m3+m2<<endl;
    }
    }
    return 0;
}
