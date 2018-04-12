#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    vector<int> w(n+1);
	    for(int i=0;i<=n;i++)
	     cin>>w[i];
	    int cnt=0;
	    for(int i=0;i<a.length();i++)
	    {
	        if(a[i]==b[i])
	         cnt++;
	    }
	    int m=w[cnt];
	    if(cnt==n)
	    {
	        cout<<w[n]<<endl;
	        continue;
	    }
	    for(int i=cnt;i>=0;i--)
	     if(m<w[i])
	      m=w[i];
	    cout<<m<<endl;
	}
	return 0;
}
