#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d,n;
	    string s;
	    for(int i=0;i<4;i++)
	     {
	         cin>>s>>n;
	    if(s=="Barcelona")
	     a=n;
	    else if(s=="Malaga")
	     b=n;
	    else if(s=="RealMadrid")
	     c=n;
	    else
	     d=n;
	     }
	     if(b>c && a>d)
	      cout<<"Barcelona"<<"\n";
	     else 
	      cout<<"RealMadrid"<<"\n";
	}
	return 0;
}
