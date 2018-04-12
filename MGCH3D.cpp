#include<bits/stdc++.h>
#define ll long long int
//#define mod 25*(1<<22) + 1
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define      rep(i, n)         for(long long int i = 0; i < (n); ++i)
using namespace std;

ll pp = 25*(1<<22) + 1;
ll p1 = pp;
ll mod = pp;

/*void fft(vector<ll> &p,ll n,ll wn)
{
    if(n==1)
        return;
    vector<ll> even(n/2);
    vector<ll> odd(n/2);
    for(int i=0;i<n/2;i++)
    {
            even[i] = p[2*i];
            odd[i] = p[2*i+1];
    }
    fft(even,n/2,(((wn)*(wn))%p1));
    fft(odd,n/2,(((wn)*(wn))%p1));
    ll w = 1;
    //vector<ll> ans(n);
    for(int i=0;i<(n/2);i++)
    {
        ll temp = ((w)*(odd[i]))%p1;
        p[i] = ((even[i]) + (temp))%p1;
        p[i+(n/2)] = ((even[i]) - (temp) + p1)%p1;
        w = ((w)*(wn))%p1;
    }
}*/


inline ll pow_(ll a, ll n, ll p=mod){
ll r=1;
while(n){if(n&1)r=r*a%p;n>>=1;a=a*a%p;}return r;}
inline ll inv_(ll a) {return pow_(a, mod-2, mod);}
inline ll add(ll a, ll b){a+=b;if(a>=mod)a-=mod;return a;}
inline ll mul(ll a, ll b){return a*1ll*b%mod;}
inline ll sub(ll a, ll b){a-=b;if(a<0)a+=mod;return a;}

ll tmp[1<<22];

void fft(ll * ar, ll n, ll w) {
	if (n == 1) return ;
	ll n2 = n>>1;
	for (ll i = 1; i < n; i += 2) tmp[i/2] = ar[i];
	rep(i, n2) ar[i] = ar[i<<1];
	rep(i, n2) ar[i+n2] = tmp[i];
	fft(ar, n2, mul(w, w));
	fft(ar + n2, n2, mul(w, w));
	ll c = 1;
	rep(i, n2) {
		ll toMul = mul(c, ar[i+n2]);
		ar[i+n2] = sub(ar[i], toMul);
		ar[i] = add(ar[i], toMul);
		c = mul(c, w);
	}
}

void DFT(ll * ar, ll n, bool inv) {
	ll w = pow_(3, !inv ? 25 : (mod - 26));
	fft(ar, n, w);
	if (inv) {
	 ll nInv = pow_(n, mod - 2);
	 rep(i, n) ar[i] = mul(ar[i], nInv);
	}
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,q,x,y,z;
    scanf("%lld%lld",&n,&q);
    ll base = 160;
    vector<pair<ll,pair<ll,ll> > > m(4000000);
    //ll minx=1<<23;
    ll off1 = 1983597;
    //ll maxx = 0;
    for(int i=-77;i<=77;i++)
    {
        for(int j=-77;j<=77;j++)
        {
            for(int k=-77;k<=77;k++)
            {
                ll k1 = i + (j*base) + (base*base*k);
                if(k1 < 0)
                    m[off1 - k1] = mp(i,mp(j,k));
                else
                    m[k1] = mp(i,mp(j,k));
                //minx = min(minx,k1);
                //maxx = max(maxx,k1);
            }
        }
    }
    vector<ll> in;
    for(int i=0;i<n;i++)
    {
        scanf("%lld%lld%lld",&x,&y,&z);
        ll te = x + (y*base) + (base*base*z);
        in.pb(te);
    }
    ll off = 2000000;
    ll one[1<<22];
    ll two[1<<22];
    ll ones = 1<<22;
    for(int i=0;i<ones;i++)
    {
    	one[i] = 0;
    	two[i] = 0;
    }
    for(int i=0;i<in.size();i++)
    {
        one[in[i]] = 1;
        two[off - in[i]] = 1;
    }
    ll w1 = 39193363;
    //cout<<w1<<endl;
    //vector<ll> onef =
    //fft(one,one.size(),w1);
    //vector<ll> secondf =
    //fft(two,one.size(),w1);
    DFT(one,1<<22,0);
    DFT(two,1<<22,0);
    //vector<ll> ifft(one.size());
    for(int i=0;i<ones;i++)
    {
        one[i] = ((one[i]%pp)*(two[i]%pp))%pp;
    }
    //cmp xxx=omegacal(one.size()),yy=1;
    ll nw = 96987805;
    //cout<<nw<<endl;
    //fft(one,one.size(),nw);
    DFT(one,1<<22,1);
    //DFT(ifft,1);
    ll n3 = ones;
    vector<pair<ll,ll> > valid;
    vector<double> den1;
    ll den = 104857576;
    //cout<<den<<endl;
    for(int i=0;i<ones;i++)
    {
        if(i==off)
            continue;
        ll te2 = one[i];
        //ll te2 = ((num%pp)*(den%pp))%pp;
        if(te2)
        {
            valid.pb(mp(te2,i));
            ll k1 = i-off;
            pair<ll,pair<ll,ll> > p;
            if(k1 < 0)
                p = m[off1 - k1];
            else
                p = m[k1];
            double den = sqrt(pow(p.ff,4) + pow(p.ss.ff,4) + pow(p.ss.ss,4));
            den1.pb(den);
        }
    }
    while(q--)
    {
        ll a,b,c,d;
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
        double ans = 0;
        for(int i=0;i<valid.size();i++)
        {
            ll k1 = valid[i].ss-off;
            pair<ll,pair<ll,ll> > p;
            if(k1 < 0)
                p = m[off1 - k1];
            else
                p = m[k1];
                ll te2 = valid[i].ff;
                double tem = abs(a*p.ff + b*p.ss.ff + c*p.ss.ss + d);
                //double den = sqrt(pow(p.ff,4) + pow(p.ss.ff,4) + pow(p.ss.ss,4));
                double ase = (tem/den1[i])*te2;
                //cout<<i-off<<" "<<p.ff<<" "<<p.ss.ff<<" "<<p.ss.ss<<" "<<te2<<" "<<ase<<endl;
                ans+=ase;
        }
        ans/=(n*(n-1));
        //double tr = 104857575.99999999692349883768495;
        printf("%.10lf\n",ans);
    }
    return 0;
}
