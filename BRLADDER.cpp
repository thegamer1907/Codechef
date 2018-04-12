#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
  ll t;
  cin>>t;
  while(t--)
  {
      ll n,m;
      cin>>n>>m;
      if(abs(n-m)==2)
       cout<<"YES"<<endl;
      else if(abs(n-m)>2)
       cout<<"NO"<<endl;
      else
       {
           if(min(n,m)%2!=0 && max(n,m)%2==0)
            cout<<"YES"<<endl;
           else
            cout<<"NO"<<endl;
       }
  }
  return 0;
}