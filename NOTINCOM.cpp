#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;


bool myfunction (int i,int j) { return (i<j); }
 
int main() {
	int t;int n,m,temp;
	vector <int> a;
	vector <int> b;
	cin>>t;
	for(int l=0;l<t;l++)
	{
	    cin>>n>>m;
	    for(int i=0;i<n;i++)
	     {
	         cin>>temp;
	         a.push_back(temp);
	     }
	    for(int j=0;j<m;j++)
	     {
	         cin>>temp;
	         b.push_back(temp);
	     }
	     int count=0;
	     sort(a.begin(),a.end());
	     sort(b.begin(),b.end());
	     for(int i=0;i<n;i++)
	     {
	         if (std::binary_search (b.begin(), b.end(), a[i], myfunction))
	          count++;
	     }
	     cout<<count<<endl;
	     a.clear();
	     b.clear();
	    
	}
	return 0;
}