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
    //freopen("in.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        if(n==1)
        {
            cout<<0<<endl;
            cout<<a[0]<<endl;
        }
        else if(n==2)
        {
            if(a[0]==a[1])
            {
                cout<<0<<endl;
                cout<<a[0]<<" "<<a[1]<<endl;
            }
            else
            {
                cout<<2<<endl;
                cout<<a[1]<<" "<<a[0]<<endl;
            }
        }
        else if(n==3)
        {
            if(m.size()==3)
            {
                cout<<3<<endl;
                cout<<a[1]<<" "<<a[2]<<" "<<a[0]<<endl;
            }
            else
            {
                cout<<2<<endl;
                if(a[0]==a[1])
                    cout<<a[2]<<" "<<a[1]<<" "<<a[0]<<endl;
                else if(a[1]==a[2])
                    cout<<a[1]<<" "<<a[0]<<" "<<a[2]<<endl;
                else
                    cout<<a[1]<<" "<<a[0]<<" "<<a[2]<<endl;
            }
        }
        else if(n%2==0)
        {
            cout<<n<<endl;
            vector<pair<int,int> > p(n);
            for(int i=0;i<n;i++)
                p[i] = mp(a[i],i);
            sort(all(p));
            vector<int> ans(n,-1);
            //map<int,int>:: iterator it = m.begin();
            //for(it = m.begin();it!=m.end();it++)
                //cout<<it->ff<<" ";
            //cout<<endl;
            int a1,b1,c1,d1;
            for(int i=0;i<n;i++)
            {
                int x = a[p[i].ss];
                map<int,int>:: iterator it = m.begin();
                while( (it->ff) == x)
                {
                    it++;
                    if(it == m.end())
                    {
                        it--;
                        break;
                    }
                }
                //cout<<it->ff<<"asd"<<endl;
                ans[p[i].ss] = it->ff;
                if(i==0)
                    a1 = p[i].ss;
                else if(i==1)
                    b1 = p[i].ss;
                else if(i==n-2)
                    c1 = p[i].ss;
                else if(i==n-1)
                    d1 = p[i].ss;
                if((it->ss) == 1)
                    m.erase(it);
                else
                    m[(it->ff)]--;
                //cout<<m[it->ff]<<"sad"<<endl;
            }
            swap(ans[a1],ans[c1]);
            swap(ans[b1],ans[d1]);
            for(int i=0;i<n;i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            //cout<<"here";
            cout<<n<<endl;
            int a1,b1,c1,d1;
            vector<pair<int,int> > p(n-1);
            map<int,int> m;
            for(int i=0;i<n-1;i++)
            {
                p[i] = mp(a[i],i);
                m[a[i]]++;
            }
            sort(all(p));
            vector<int> ans(n);
            ans[n-1] = a[n-1];
            for(int i=0;i<n-1;i++)
            {
                int x = a[p[i].ss];
                map<int,int>:: iterator it = m.begin();
                while( (it->ff) == x )
                {
                    it++;
                    if(it == m.end())
                    {
                        it--;
                        break;
                    }
                }
                //cout<<it->ff<<"asd"<<endl;

                ans[p[i].ss] = it->ff;
                if(i==0)
                    a1 = p[i].ss;
                else if(i==1)
                    b1 = p[i].ss;
                else if(i==n-3)
                    c1 = p[i].ss;
                else if(i==n-2)
                    d1 = p[i].ss;
                if((it->ss) == 1)
                    m.erase(it);
                else
                    m[(it->ff)]--;
                //cout<<m[it->ff]<<"sad"<<endl;
            }
            swap(ans[a1],ans[c1]);
            swap(ans[b1],ans[d1]);
            swap(ans[0],ans[n-1]);
            for(int i=0;i<n;i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

/*
1
22
48 83 95 41 2 50 91 36 74 20 96 21 48 99 68 84 81 34 53 99 18 38
*/