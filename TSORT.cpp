#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int> a(t);
    for(int i=0;i<t;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<t;i++)
        cout<<a[i]<<endl;
}
