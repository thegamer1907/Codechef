#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n==1)
	    {
	        string b;
	     cin>>b;
	     if(b=="cookie")
	      cout<<"NO"<<endl;
	      else
	      cout<<"YES"<<endl;
	    }
	    else
	    {
	    vector<string> a(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    if(a[n-1]=="cookie")
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	    int flag=0;
	    for(int i=0;i<n-1;i++)
	    {
	        if(a[i]=="cookie" && a[i+1]==a[i])
	        {
	            cout<<"NO"<<endl;
	            flag=1;
	            break;
	        }
	    }
	    if(!flag)
	    cout<<"YES"<<endl;
	    }
	    }
	}
	return 0;
}
