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
        int n,v1,v2;
        cin>>n>>v1>>v2;
        double ele = (2.0*n)/v2;
        double st = (sqrt(2)*n)/v1;
        if(st<ele)
            cout<<"Stairs"<<endl;
        else
            cout<<"Elevator"<<endl;
    }

}
