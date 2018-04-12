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
        char freq[26];
        memset(freq,'A',sizeof(freq));
        int flag=1;
        for(int i=0;i<b.length();i++)
        {
            if(freq[b[i]-'a']=='A')
                freq[b[i]-'a'] = a[i];
            else if(freq[b[i]-'a'] != a[i])
            {
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
