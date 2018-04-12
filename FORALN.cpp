#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	vector<string> ka;
	vector<string> ki;
	while(t--)
	{
	    string a;
	    cin>>a;
	    if(a[a.length()-1]=='a' && a[a.length()-2]=='k')
	     ka.push_back(a.substr(0,a.length()-2));
	    else if(a[a.length()-1]=='i' && a[a.length()-2]=='k')
	     ki.push_back(a.substr(0,a.length()-2));
	}
	sort(ka.begin(),ka.end());
	sort(ki.begin(),ki.end());
	int i,j;
	vector<pair<string,int> > cka;
	map<string,int> cki;
	for(i=0;i<ka.size();i=j)
      {
          int count1=0;
          for(j=i;j<ka.size();j++)
          {
              if(ka[i]==ka[j])
                count1++;
              else
                break;
          }
          cka.push_back(make_pair(ka[i],count1));
      }
      for(i=0;i<ki.size();i=j)
      {
          int count1=0;
          for(j=i;j<ki.size();j++)
          {
              if(ki[i]==ki[j])
                count1++;
              else
                break;
          }
          cki.insert(make_pair(ki[i],count1));
      }
      int final=0;
      for(int i=0;i<cka.size();i++)
      {
          if(cki.count(cka[i].first))
          {
              final+= min(cki[cka[i].first],cka[i].second);
              //cout<<"found"<<endl;
              //cout<<cki[cka[i].first]<<endl;
              //cout<<cka[i].second<<endl;
          }
      }
      cout<<final;
	return 0;
}
