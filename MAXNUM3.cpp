#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define fr(i,l,r) for(int i=l;i<r;i++)

#define rfr(i,l,r) for(int i=r-1;i>=l;i--)

#define wh(t) while(t--)

#define ret return

#define ll long long

#define get(x) cin>>x

#define put(x) cout<<x

#define pls(x) cout<<x<<' '

#define pln(x) cout<<x<<"\n"

#define pnl() cout<<"\n"

#define ppair(x) cout<<x.first<<' '<<x.second<<"\n";

#define pb(x) push_back(x)

#define sz size

#define szo sizeof

#define br break

#define con continue

#define pr(x,y) pair<x,y>

#define ms(a,v) memset(a,v,sizeof(a))

#define mpair(x,y) make_pair(x,y)

#define v(k) vector<k >

#define vp(x,y) vector<pair<x,y> >

#define MAXN 1e6

#define vec(x) vector<x >

#define parray(a,n) fr(i,0,n){ pls(a[i]); } pnl();

#define cin cin


void bekarka()
{
    float wast1 = 5.67;
    float cantdothisshit = 3.222222;
    float iamcheater = 4.678955;
}


int main() {

    ios_base::sync_with_stdio(0);

    cin.tie(0);

    int t;

    get(t);

    do {

        string n;

        get(n);

        ll sum = 0;

        vec(int) v[10],check;

        fr(i,0,n.length()) {

            sum += n[i]-48;

            v[n[i]-48].push_back(i);

        }

        for(int i = sum%3;i < 10;i += 3) {

            for(auto y : v[i])

                check.push_back(y);

        }

        string ans = "";

        if(n[n.length()-1]%2==0) {

            for(auto i : check) {

                string z;

                if(i>0 && i<n.length()-1)

                    z = n.substr(0,i) + n.substr(i+1);

                else if(i==0)

                    z = n.substr(1);

                else

                    z = n.substr(0,n.length()-1);

                if((z[z.length()-1]-48)%2==0 && (sum-n[i]+48)%3 == 0) {

                    if(z>ans)

                        ans = z;

                }

            }

        }

        else {

            string z;

            z = n.substr(0,n.length()-1);

            if((z[z.length()-1]-48)%2==0 && (sum-n[n.length()-1]+48)%3 == 0) {

                if(z>ans)

                    ans = z;

            }

        }

        if(ans.length() != 0)

            pln(ans);

        else

            pln(-1);

    }while(--t);

    ret 0;

}
