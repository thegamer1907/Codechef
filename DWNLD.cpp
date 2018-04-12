#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        int sum=0,final=0;int pos=0,diff=0,flag=0;
        if(k!=0)
        {
        for(int i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
            sum+=a[i];
            if(sum==k && flag==0)
             {
                 pos=i+1;
                 flag=1;
             }
             if(sum>k && flag==0)
             {
                 pos=i;
                 diff=sum-k;
                 flag=1;
             }
        }
        
        if(diff==0)
        {
            for(int i=pos;i<n;i++)
             final+= (a[i]*b[i]);
        }
        else
        {
            final+=diff*b[pos];
            for(int i=pos+1;i<n;i++)
             final+=(a[i]*b[i]);
        }
       // if(sum<k)
         //final=0;
        }
        else
         for(int i=0;i<n;i++)
         {
             cin>>a[i]>>b[i];
             final+= a[i]*b[i];
         }
        cout<<final<<endl;
    }
	
	return 0;
}
