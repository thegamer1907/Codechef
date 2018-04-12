#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	//string a = "GeeksforGeeks";
    //string b = "Gks";
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string a,t;
        char temp;
        ll tb=0;
        for(ll i=0;i<n;i++)
         {
             cin>>temp;
             if(temp=='a' || temp=='b')
              a+=temp;
             if(temp=='b')
              tb++;
         }
         ll pr=tb;
         ll fin=0;
         for(ll i=0;i<a.length();i++)
         {
             if(a[i]=='b')
              tb--;
             if(a[i]=='a')
             {
                 fin+= ((pr*(k-1) + (2*tb))*(k))/2;
             }
         }
         cout<<fin<<endl;
    }
	return 0;
}
