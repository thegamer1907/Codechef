#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll n;
    while(1)
    {
        cin>>n;
        if(n==0)
         break;
        char a[300];
        scanf("%s",a);
        char ans[25][25];
        int r = strlen(a)/n;
        //cout<<a.length();
        int pos=0;
        for(int i=0;i<r;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<n;j++)
                {
                  ans[i][j] = a[pos++];  
                }
            }
            else
            {
                for(int j=n-1;j>=0;j--)
                {
                    ans[i][j] = a[pos++];
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<r;j++)
            {
                cout<<ans[j][i];
            }
            //cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}