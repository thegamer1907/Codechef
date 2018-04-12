#include<iostream>

using namespace std;

int main()
{
    int a[100],i;
    for(i=0;i<100;i++)
    {
        cin>>a[i];
        if(a[i]==42)
        {
            break;
        }
    }
    for(int j=0;j<i;j++)
    {
        cout<<a[j]<<"\n";
    }
}
