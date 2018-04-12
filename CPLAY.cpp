#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;





int main()
{
    //freopen("in.txt","r",stdin);
    char a[25];
    while(scanf("%s",a)!=EOF)
    {
        int cnt = 0;
        int t1=0,t2=0;
        int rt1=5,rt2=5;
        int flag = 0;
        for(int i=0;i<10;i++)
        {
            if(a[i]=='1')
            {
                if(i%2==0)
                    t1++;
                else
                    t2++;
            }
            if(i%2==0)
                rt1--;
            else
                rt2--;
            if(t1> (rt2+t2))
            {
                cout<<"TEAM-A"<<" "<<i+1<<endl;
                flag=1;
                break;
            }
            else if(t2 > (rt1+t1))
            {
                cout<<"TEAM-B"<<" "<<i+1<<endl;
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            for(int i=10;i<20;i++)
            {
                if(a[i]=='1')
                {
                   if(i%2==0)
                    t1++;
                   else
                    t2++;
                }
                if(i%2==1)
                {
                    if(t1> t2)
                    {
                        cout<<"TEAM-A"<<" "<<i+1<<endl;
                        flag=1;
                        break;
                    }
                    else if(t2 > t1)
                    {
                        cout<<"TEAM-B"<<" "<<i+1<<endl;
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(!flag)
            cout<<"TIE"<<endl;
    }
    return 0;
}

