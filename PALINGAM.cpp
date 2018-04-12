#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007


using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int freqa[26] = {0};
        int freqb[26] = {0};
        for(int i=0;i<a.length();i++)
        {
            freqb[b[i]-'a']++;
            freqa[a[i]-'a']++;
        }
        char win = 'B';
        bool tempwin=false;
        for(int i=0;i<26;i++)
        {
            if(freqb[i]==0 && freqa[i]>1)
            {
                win='A';
                break;
            }
            else if(freqb[i]==0 && freqa[i]>0)
            {
                tempwin=true;
            }

        }
        if(!tempwin || win=='A')
        {
            cout<<win<<endl;
            continue;
        }
        win = 'A';
        for(int i=0;i<26;i++)
        {
            if(freqb[i] && !freqa[i])
            {
                win = 'B';
            }
        }
        cout<<win<<endl;
    }
}
