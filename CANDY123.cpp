#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        cin>>a>>b;
        int res,i=1;
        int l=0,bo=0;
        while(1){
            l+=i;
            i++;
            if(l>a) {res=1;break;}
            bo+=(i);
            i++;
            if(bo>b) {res=2;break;}
        }
        res==1?cout<<"Bob"<<endl:cout<<"Limak"<<endl;
    }
    
    
    return 0;
}