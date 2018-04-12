#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,b,temp,k,ans,temp1,temp2;
	    cin>>n>>b;
	    if(n>b)
        {
            if(n%b==0)
            {
                k=n/b;
                if(k%2==0)
                {
                    ans = (k/2)*(n-((k/2)*b));
                }
                else
                {
                    ans = max(((k-1)/2)*(n-(((k-1)/2)*b)),((k+1)/2)*(n-(((k+1)/2)*b)));
                }
            }
            else
            {
                k=n/b;
                if(k%2==0)
                {
                    temp = ((k/2)*b) + (n%b);
                    ans = ((n-temp)/b)*temp;
                }
                else
                {
                    temp1 = (((k+1)/2)*b) + (n%b);
                    temp2 = (((k-1)/2)*b) + (n%b);
                    ans = max(((n-temp1)/b)*temp1,((n-temp2)/b)*temp2);
                }
            }
        }
        else
        {
            ans=0;
        }
        cout<<ans<<endl;
	}
	return 0;
}
