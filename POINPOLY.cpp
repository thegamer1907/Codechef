#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define INF 1000000000
using namespace std;


//The code to check insegment has been taken from outside.

struct Point
{
    ll x,y;
};



ll orientation(Point p, Point q, Point r)
{
    ll val = (q.y - p.y) * (r.x - q.x) -
             (q.x - p.x) * (r.y - q.y);

    if (val == 0)
        return 0;
    return (val > 0)? 1: 2;
}

bool doIntersect(Point p1, Point q1, Point p2, Point q2)
{
    ll o1 = orientation(p1, q1, p2);
    ll o2 = orientation(p1, q1, q2);
    ll o3 = orientation(p2, q2, p1);
    ll o4 = orientation(p2, q2, q1);
    if (o1 != o2 && o3 != o4)
        return true;
    return false;
}

bool isInside(Point polygon[], ll n, Point p)
{
    if (n < 3)
        return false;
    Point extreme = {INF, p.y};
    ll count = 0, i = 0;
    do
    {
        ll next = (i+1)%n;

        if (doIntersect(polygon[i], polygon[next], p, extreme))
        {

            if (orientation(polygon[i], p, polygon[next]) == 0)
                return false;
            count++;
        }
        i = next;
    }
    while (i != 0);

    return count&1;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    int T = t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(T==100 && n <=50)
        {
            Point a[n];
            for(int i=0;i<n;i++)
            {
                cin>>a[i].x>>a[i].y;
            }
            map<pair<int,int>,int> m;
            int tot = n/10;
            int cnt=0;
            for(int j=0;j<n;j++)
            {
                for(int i=j;i<n;i++)
                {
                    if(i==j)
                        continue;
                    if(j==n-1)
                    {
                        if(i==0 || i==n-2)
                            continue;
                    }
                    if(j==0)
                    {
                        if(i==n-1 || i==1)
                            continue;
                    }
                    if(i==j+1 || i==j-1)
                        continue;
                    Point st1;
                    st1.x = a[i].x - a[j].x;
                    st1.y = a[i].y - a[j].y;
                    ll gc = __gcd(abs(st1.x),abs(st1.y));
                    st1.x/=gc;
                    st1.y/=gc;
                    Point test;
                    test.x = a[i].x - st1.x;
                    test.y = a[i].y - st1.y;
                    while(test.x!=a[j].x && test.y!=a[j].y)
                    {
                        if(m[mp(test.x,test.y)] == 0)
                        {
                            cout<<test.x<<" "<<test.y<<endl;
                            cnt++;
                            if(cnt==tot)
                                break;
                            m[mp(test.x,test.y)] == 1;
                        }
                        test.x+=st1.x;
                        test.y+=st1.y;
                    }
                    if(cnt==tot)
                        break;
                }
                if(cnt==tot)
                   break;
            }
        }
        else
        {
            vector<pair<ll,ll> > a(n);
            ll maxx = 1e9;
            ll maxy = maxx;
            ll minx = -1e9;
            ll miny = minx;
            ll stx = 0;
            ll sty = 0;
            ll tot = n/10;
            for(ll i=0;i<n;i++)
            {
                cin>>a[i].ff>>a[i].ss;
                maxx = max(maxx,a[i].ff);
                maxy = max(maxy,a[i].ss);
                minx = min(minx,a[i].ff);
                miny = min(miny,a[i].ss);
                stx+=a[i].ff;
                sty+=a[i].ss;
            }
            stx/=n;
            sty/=n;
            ll cnt = 1;
            cout<<stx<<" "<<sty<<endl;
            for(int i=1;i<tot;i++)
            {
                if(stx + i < maxx)
                {
                    cout<<stx+i<<" "<<sty<<endl;
                    cnt++;
                }
                if(cnt == tot)
                    break;
                if(stx - i > minx)
                {
                    cout<<stx-i<<" "<<sty<<endl;
                    cnt++;
                }
                if(cnt == tot)
                    break;
                if(sty + i < maxy)
                {
                    cout<<stx<<" "<<sty+i<<endl;
                    cnt++;
                }
                if(cnt == tot)
                    break;
                if(sty - i > maxy)
                {
                    cout<<stx<<" "<<sty-i<<endl;
                    cnt++;
                }
                if(cnt == tot)
                    break;
            }
        }
    }
    return 0;
}

