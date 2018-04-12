#include<bits/stdc++.h>
#define ll long long int1
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;

/*
1
76 28 100 757 665 297
*/
int threeorone(int d,int a,int c)
{
    return min(c*d,3*a*d);
}

int twoorone(int d,int a,int b)
{
    return min(b*d,2*a*d);
}

int oneway(int d,int a)
{
    return d*a;
}





int pair_check(vector<int> d,int a,int b,int c)
{
    vector<int> temp = d;
    //cout<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<endl;
    int first = twoorone(temp[0],a,b);
    temp[1]-=temp[0];
    first+= twoorone(temp[1],a,b);
    temp[2]-=temp[1];
    first+= oneway(temp[2],a);
    //cout<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<endl;
    temp = d;
    //cout<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<endl;
    int second = twoorone(temp[0],a,b);
    temp[2]-=temp[0];
    if(temp[1] > temp[2])
        swap(temp[1],temp[2]);
    second+= twoorone(temp[1],a,b);
    temp[2]-=temp[1];
    second+= oneway(temp[2],a);
    temp = d;
    //cout<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<endl;
    int third = threeorone(temp[0],a,c);
    temp[1]-=temp[0];
    temp[2]-=temp[0];
    third+= twoorone(temp[1],a,b);
    temp[2]-=temp[1];
    third+= oneway(temp[2],a);
    return min(first,min(second,third));
}



int other_way(vector<int> d,int a,int b,int c)
{
    vector<int> t = d;
    int first = 1e9;
    int second = 1e9;
    int third = 1e9;
    int x1;
    x1 = t[0] + (t[1] - t[2]);
    if(x1>=0)
    {
        if(x1 & 1)
        {
            x1--;
            t[0]--;
            //cout<<"here4";
            first = a;
        }
        else
            first = 0;
        third = min(third,threeorone(x1,a,c)+twoorone(t[2]-x1,a,b)+first);
        x1/=2;
        first+= twoorone(t[1]-x1,a,b);
        first+= twoorone(t[0],a,b);
    }

    t = d;
    //cout<<t[0]<<" "<<t[1]<<" "<<t[2]<<endl;
    x1 = t[0] + (t[1] - t[2]);
    if(x1>=0)
    {
        if(x1 & 1)
        {
            if((t[0]%2) ^ (t[1]%2) ^ (t[2]%2))
            {
                x1--;
                t[1]--;
                t[2]--;
                t[0]--;
                second = c;
            }
            else
                second = 0;
        }
        if(x1%2==0)
        {
            third = min(third,threeorone(x1,a,c)+twoorone(t[2]-x1,a,b)+second);
            x1/=2;
            second+= twoorone(t[1]-x1,a,b);
            second+= twoorone(t[0],a,b);
        }
    }
    return min(first,min(second,third));
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        vector<int> d(3);
        cin>>d[0]>>d[1]>>d[2]>>a>>b>>c;
        sort(all(d));
        int ans = pair_check(d,a,b,c);
        ans = min(ans,other_way(d,a,b,c));
        cout<<ans<<endl;
    }
    return 0;
}

