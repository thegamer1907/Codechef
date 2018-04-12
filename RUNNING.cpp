#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void getZarr(string str, int Z[]);
void search(string text, string pattern)
{
    ll count=0;
    string concat = pattern + "$" + text;
    int l = concat.length();
    int Z[l];
    getZarr(concat, Z);
    for (int i = 0; i < l; ++i)
    {
        if (Z[i] == pattern.length())
            count++;
    }
    cout<<count<<endl;
}

void getZarr(string str, int Z[])
{
    int n = str.length();
    int L, R, k;
    L = R = 0;
    for (int i = 1; i < n; ++i)
    {
        if (i > R)
        {
            L = R = i;
            while (R<n && str[R-L] == str[R])
                R++;
            Z[i] = R-L;
            R--;
        }
        else
        {
            k = i-L;
            if (Z[k] < R-i+1)
                 Z[i] = Z[k];
            else
            {
                L = i;
                while (R<n && str[R-L] == str[R])
                    R++;
                Z[i] = R-L;
                R--;
            }
        }
    }
}



int main() {
    std::ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
         cin>>a[i];
        vector<ll> b(k);
        for(ll i=0;i<k;i++)
         cin>>b[i];
        vector<ll> diff(n);
        for(ll i=1;i<n;i++)
        {
            diff[i-1]=a[i]-a[i-1];
        }
        string d,o;
        for(ll i=0;i<k;i++)
         o+=b[i]+'0';
        for(ll i=0;i<n;i++)
         d+=diff[i]+'0';
         search(d,o);
    }
	return 0;
}