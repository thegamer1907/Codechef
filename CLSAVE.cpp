#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int sum=0,temp;
	    for(int i=0;i<n;i++)
	    {
	        cin>>temp;
	        sum+=temp;
	    }
	    if((k-sum)>=(int)ceil(k/2.0))
	     cout<<"Yes"<<endl;
	     else
	     cout<<"No"<<endl;
	}
	return 0;
}
