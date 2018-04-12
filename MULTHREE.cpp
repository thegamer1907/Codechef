#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;


int func(int st,ll rem)
{
    int st2[] = {0,2,6,14};
    int st4[] = {0,4,12,18};
    int st6[] = {0,6,8,12};
    int st8[] = {0,8,14,16};
    switch(st)
    {
        case 2: return st2[rem];
        case 4: return st4[rem];
        case 6: return st6[rem];
        case 8: return st8[rem];
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll k,d0,d1;
        cin>>k>>d0>>d1;
        if(k <=3)
        {
            if(k==2)
            {
                if((d0+d1)%3==0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
            {
                if(((d0+d1) + ((d0+d1)%10))%3==0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
        }
        else
        {
            int st = (((d0+d1) + ((d0+d1)%10)))%10;
            if(st == 0)
            {
                if(((d0+d1) + ((d0+d1)%10))%3==0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;

            }
            else
            {

                ll p = (k-3)/4;
                ll ans = (20*(p%3))%3;
                ll rem = (k-3)%4;
                ans+=((d0+d1) + ((d0+d1)%10));
                ans = ans%3;
                ans+=(func(st,rem));
                ans = ans%3;
                if(ans)
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}

