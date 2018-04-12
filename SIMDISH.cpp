#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool myfunction (string i,string j) { return (i<j); }

int main() {
    int n;
    cin>>n;
    while(n--)
    {
        vector<string> a(4);
        vector<string> b(4);
        for(int i=0;i<4;i++)
        cin>>a[i];
        for(int i=0;i<4;i++)
        cin>>b[i];
        sort(b.begin(),b.end());
        int count=0;
        for(int i=0;i<4;i++)
        {
            if(binary_search(b.begin(),b.end(),a[i],myfunction))
            {
                count++;
            }
        }
        if(count>=2)
         cout<<"similar"<<endl;
        else
         cout<<"dissimilar"<<endl;
        
    }
	return 0;
}
