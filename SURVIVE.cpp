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
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,s;
        cin>>n>>k>>s;
        int ch = 0;
        int day = 0;
        if(k > n)
        {
            cout<<-1<<endl;
            continue;
        }
        int flag = 1;
        int prev = 0;
        for(int i=1;i<=s;i++)
        {
            if(ch < k)
            {
                if(i%7==0)
                {
                    if(prev)
                    {
                        day++;
                        ch+=(n-k);
                        prev--;
                    }
                    else
                    {
                        day = -1;
                        break;
                    }
                }
                else
                {
                    ch+=(n-k);
                    day++;
                }
            }
            else
            {
                ch-=k;
                if(i%7!=0)
                    prev++;
            }
        }
        if(flag)
            cout<<day<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}

