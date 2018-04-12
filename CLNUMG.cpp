#include <iostream>
#include <math.h>
#define ll long long int
using namespace std;

long long int power(long long int x,long long int y)
{
    long long int res = 1;
    //x = x % m;  // Mods
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x); //% m;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x); //% m;  
    }
    return res;
}


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    ll final=0;
	    for(int i=0;i<n-1;i++)
	     final+=power(2,i);
	     final+=power(2,(n+m-1));
	     cout<<final<<endl;
	    
	  
	}
	return 0;
}
