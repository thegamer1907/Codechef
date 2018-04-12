#include<bits/stdc++.h>
#include <unordered_map>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
using namespace std;


struct p
{
    string name;
    int score;
    int time;
};

bool cmp(p a,p b)
{
    if(a.score==b.score)
    {
        if(a.time<b.time)
            return true;
        else
            return false;
    }
    else if(a.score>b.score)
        return true;
    else
        return false;

}

int a[1005][1005] = {0};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        memset(a,0,sizeof(a));
        unordered_map<string,int> code;
        unordered_map<string,int> name;
        unordered_map<int,string> name1;
        int n,m;
        cin>>n>>m;
        string s;
        for(int i=0;i<m;i++)
        {
            cin>>s;
            code[s] = i;
        }
        int k=1;
        string na,pr;int sc;
        int pos;
        for(int i=0;i<n;i++)
        {
            cin>>na>>pr>>sc;
            if(name[na]==0)
            {
                name[na] = k;
                name1[k] = na;
                pos=k;
                k++;
            }
            else
                pos = name[na];
            //cout<<pos<<endl;
            if(sc>a[pos][code[pr]])
            {
                a[pos][code[pr]] = max(a[pos][code[pr]],sc);
                int fin=0;
                for(int i=0;i<m;i++)
                    fin+=a[pos][i];
                a[pos][m] = fin;
                a[pos][m+1] = i;
            }
        }
        vector<p> fin(k);
        for(int i=1;i<k;i++)
        {
            fin[i-1].name = name1[i];
            fin[i-1].score = a[i][m];
            fin[i-1].time = a[i][m+1];
        }
        sort(all(fin),cmp);
        cout<<k-1<<endl;
        for(int i=1;i<k;i++)
        {
            cout<<fin[i-1].name<<" "<<fin[i-1].score<<endl;
        }
    }
    return 0;
}
