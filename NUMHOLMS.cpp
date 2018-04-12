#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,temp,sum=0;
	    int num[10]={0};
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>temp;
	        num[temp]++;
	        sum+=temp;
	    }
	    if(num[0]==0)
	    {
	        cout<<"-1"<<endl;
	        continue;
	    }
	    if(num[0]==n)
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	    sum%=3;
	    int flag=1;
	    if(sum==1)
	    {
	        if(num[1]>0)
	        {
	            num[1]--;
	            n--;
	        }
	        else if(num[4]>0)
	        {
	            num[4]--;
	            n--;
	        }
	        else if(num[7]>0)
	        {
	            num[7]--;
	            n--;
	        }
	        else if(num[2]>1)
	        {
	            num[2]-=2;
	            n-=2;
	        }
	        else if(num[2]>0&&num[5]>0)
	        {
	            num[2]--;
	            num[5]--;
	            n-=2;
	        }
	        else if(num[5]>1)
	        {
	            num[5]-=2;
	            n-=2;
	        }
	        else if(num[2]>0&&num[8]>0)
	        {
	            num[2]--;
	            num[8]--;
	            n-=2;
	        }
	        else if(num[5]>0&&num[8]>0)
	        {
	            num[5]--;
	            num[8]--;
	            n-=2;
	        }
	        else if(num[2]>0&&num[5]>0)
	        {
	            num[2]--;
	            num[5]--;
	            n-=2;
	        }
	        else if(num[8]>1)
	        {
	            num[8]-=2;
	            n-=2;
	        }
	        else
	         flag=0;
	    }
	    else if(sum==2)
	    {
	        if(num[2]>0)
	        {
	            num[2]--;
	            n--;
	        }
	        else if(num[5]>0)
	        {
	            num[5]--;
	            n--;
	        }
	        else if(num[8]>0)
	        {
	            num[8]--;
	            n--;
	        }
	        else if(num[1]>1)
	        {
	            num[1]-=2;
	            n-=2;
	        }
	        else if(num[1]>0&&num[4]>0)
	        {
	            num[1]--;
	            num[4]--;
	            n-=2;
	        }
	        else if(num[4]>1)
	        {
	            num[4]-=2;
	            n-=2;
	        }
	        else if(num[1]>0&&num[7]>0)
	        {
	            num[1]--;
	            num[7]--;
	            n-=2;
	        }
	        else if(num[4]>0&&num[7]>0)
	        {
	            num[4]--;
	            num[7]--;
	            n-=2;
	        }
	        else if(num[7]>1)
	        {
	            num[7]-=2;
	            n-=2;
	        }
	        else 
	         flag=0;
	    }
	    if(flag==0)
	     {
	         cout<<"-1"<<endl;
	         continue;
	     }
	    if(num[0]==n)
	    {
	        cout<<"0"<<endl;
	        continue;
	    }
	    //for(int i=0;i<10;i++)
	     //cout<<num[i]<<" ";
	     //cout<<endl;
	    for(int i=9;i>=0;i--)
	    {
	        for(int j=0;j<num[i];j++)
	         cout<<i;
	    }
	    cout<<endl;
	}
	return 0;
}
