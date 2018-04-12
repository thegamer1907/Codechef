#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	ll p;
	cin>>p;
	while(p--){
	    ll n;
	    cin>>n;
	    ll count=0;
	    ll drs[6]={0};
	    while(n--){
	        int o=0,b=0;
	        string a;
	        cin>>a;
            string temp;
	        for(ll i=0;a[i]!='.';i++){
	            temp+=a[i];
	        }
	       // cout<<temp<<"*";
	        for(ll i=temp.length()-1,j=0;i>=0;i--,j++){
	            o+=(temp[i]-'0')*pow(10,j);
	        }
	        //cout<<o<<"#";
	        if(o>=0&&o<=79){
	            if(drs[0]<2)
	           { drs[0]++;
	             count++;}
	        }
	        else if(o>=80&&o<=159){
	            if(drs[1]<2)
	            {drs[1]++;
	             count++;}
	        }
	        else if(o>=160&&o<=239){
	            if(drs[2]<2)
	            {drs[2]++;
	             count++;}
	        }
	        else if(o>=240&&o<=319){
	            if(drs[3]<2)
	            {drs[3]++;
	             count++;}
	        }
	        else if(o>=320&&o<=399){
	            if(drs[4]<2)
	            {drs[4]++;
	             count++;}
	        }
	        else{
	            if(drs[5]<2)
	            {drs[5]++;
	             count++;}
	        }
	    }
	    cout<<count<<endl;
	}
	
	
	return 0;
}