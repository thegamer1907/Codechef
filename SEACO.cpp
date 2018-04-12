#include<bits/stdc++.h>
using namespace std;
#define MAXN 1e6
#define ll long long int
#define mod 1000000007
#define sz size

struct data {
 int t,l,r;
 int p;
};

int d[(int ) MAXN],d1[(int) MAXN]= {0};

ll tree[(int) MAXN ];
ll lazy[(int) MAXN ];

ll tree1[(int) MAXN];
ll lazy1[(int) MAXN];



void updateRangeUtil(int si, int ss, int se, int us,
 int ue, int diff)
{
 if (lazy[si] != 0)
 {
 tree[si] = (tree[si]%mod + (((se-ss+1)%mod)*(lazy[si]%mod))%mod)%mod;
 if (ss != se)
 {
 lazy[si*2 + 1] = (lazy[si*2 + 1]%mod + lazy[si]%mod)%mod;
 lazy[si*2 + 2] = (lazy[si*2 + 2]%mod + lazy[si]%mod)%mod;
 }
 lazy[si] = 0;
 }
 if (ss>se || ss>ue || se<us)
 return ;
 if (ss>=us && se<=ue)
 {
 tree[si] = (tree[si]%mod + (((se-ss+1)%mod)*(diff%mod))%mod)%mod;
 if (ss != se)
 {
 lazy[si*2 + 1] = (lazy[si*2 + 1]%mod + diff%mod)%mod;
 lazy[si*2 + 2] = (lazy[si*2 + 2]%mod + diff%mod)%mod;
 }
 return;
 }
 int mid = (ss+se)/2;
 updateRangeUtil(si*2+1, ss, mid, us, ue, diff);
 updateRangeUtil(si*2+2, mid+1, se, us, ue, diff);
 tree[si] = (tree[si*2+1]%mod + tree[si*2+2]%mod)%mod;
}


void updateRange(int n, int us, int ue, int diff)
{
 updateRangeUtil(0, 0, n-1, us, ue, diff);
}


int getSumUtil(int ss, int se, int qs, int qe, int si)
{
 if (lazy[si] != 0)
 {
 tree[si] = (tree[si]%mod + ((se-ss+1)%mod*lazy[si]%mod)%mod)%mod;
 if (ss != se)
 {
 lazy[si*2+1] = (lazy[si*2+1]%mod + lazy[si]%mod)%mod;
 lazy[si*2+2] = (lazy[si*2+2]%mod + lazy[si]%mod)%mod;
 }
 lazy[si] = 0;
 }
 if (ss>se || ss>qe || se<qs)
 return 0;
 if (ss>=qs && se<=qe)
 return tree[si]%mod;
 int mid = (ss + se)/2;
 return (getSumUtil(ss, mid, qs, qe, 2*si+1)%mod +
 getSumUtil(mid+1, se, qs, qe, 2*si+2)%mod)%mod;
}


int getSum(int n, int qs, int qe)
{
 return getSumUtil(0, n-1, qs, qe, 0);
}


void constructSTUtil(int arr[], int ss, int se, int si)
{
 if (ss > se)
 return ;
 if (ss == se)
 {
 tree[si] = arr[ss]%mod;
 return;
 }
 int mid = (ss + se)/2;
 constructSTUtil(arr, ss, mid, si*2+1);
 constructSTUtil(arr, mid+1, se, si*2+2);
 tree[si] = (tree[si*2 + 1]%mod + tree[si*2 + 2]%mod)%mod;
}

void constructST(int arr[], int n)
{
 constructSTUtil(arr, 0, n-1, 0);
}

void updateRangeUtil1(int si, int ss, int se, int us,
 int ue, int diff)
{
 if (lazy1[si] != 0)
 {
 tree1[si] = (((se-ss+1)%mod*lazy1[si]%mod)%mod + tree1[si]%mod)%mod;
 if (ss != se)
 {
 lazy1[si*2 + 1] = (lazy1[si*2 + 1]%mod + lazy1[si]%mod)%mod;
 lazy1[si*2 + 2] = (lazy1[si*2 + 2]%mod + lazy1[si]%mod)%mod;
 }
 lazy1[si] = 0;
 }
 if (ss>se || ss>ue || se<us)
 return ;
 if (ss>=us && se<=ue)
 {
 tree1[si] = (tree1[si]%mod + ((se-ss+1)%mod*diff%mod)%mod)%mod;
 if (ss != se)
 {
 lazy1[si*2 + 1] = (lazy1[si*2 + 1]%mod + diff%mod)%mod;
 lazy1[si*2 + 2] = (lazy1[si*2 + 2]%mod + diff%mod)%mod;
 }
 return;
 }
 int mid = (ss+se)/2;
 updateRangeUtil1(si*2+1, ss, mid, us, ue, diff);
 updateRangeUtil1(si*2+2, mid+1, se, us, ue, diff);
 tree1[si] = (tree1[si*2+1]%mod + tree1[si*2+2]%mod)%mod;
}


void updateRange1(int n, int us, int ue, int diff)
{
 updateRangeUtil1(0, 0, n-1, us, ue, diff);
}



int getSumUtil1(int ss, int se, int qs, int qe, int si)
{
 if (lazy1[si] != 0)
 {
 tree1[si] = (((se-ss+1)%mod*lazy1[si]%mod)%mod + tree1[si]%mod) ;
 if (ss != se)
 {
 lazy1[si*2+1] = (lazy1[si*2+1]%mod + lazy1[si]%mod)%mod;
 lazy1[si*2+2] = (lazy1[si]%mod + lazy1[si*2+2]%mod)%mod;
 }
 lazy1[si] = 0;
 }
 if (ss>se || ss>qe || se<qs)
 return 0;
 if (ss>=qs && se<=qe)
 return tree1[si]%mod;
 int mid = (ss + se)/2;
 return (getSumUtil1(ss, mid, qs, qe, 2*si+1)%mod +
 getSumUtil1(mid+1, se, qs, qe, 2*si+2)%mod)%mod;
}

int getSum1(int n, int qs, int qe)
{
 return getSumUtil1(0, n-1, qs, qe, 0);
}


void constructSTUtil1(int arr[], int ss, int se, int si)
{
 if (ss > se)
 return ;
 if (ss == se)
 {
 tree1[si] = arr[ss]%mod;
 return;
 }
 int mid = (ss + se)/2;
 constructSTUtil1(arr, ss, mid, si*2+1);
 constructSTUtil1(arr, mid+1, se, si*2+2);
 tree1[si] = (tree1[si*2 + 1]%mod + tree1[si*2 + 2]%mod)%mod;
}


void constructST1(int arr[], int n)
{
 constructSTUtil1(arr, 0, n-1, 0);
}

int main() {
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 int t;
 cin>>t;
 do {
 for(int i=0;i<MAXN;i++) {
 d[i] = 1;
 tree[i] = 0;
 tree1[i]= 0;
 lazy[i] = 0;
 lazy1[i] = 0;
 }
 int n,m;
 cin>>n>>m;
 constructST(d1, n);
 constructST1(d, m);
 data a[m];
 vector<data> list;
 for(int i=0;i<m;i++) {
 cin>>a[i].t>>a[i].l>>a[i].r;
 a[i].p = i;
 if(a[i].t==2)
 list.push_back(a[i]);
 }
 for(int i=(int)list.sz()-1;i>=0;i--) {
 updateRange1(m, list[i].l-1, list[i].r-1, getSum1(m, list[i].p, list[i].p));
 }

 for(int i=0;i<m;i++) {
 if(a[i].t!=2) {
 updateRange(n, a[i].l-1, a[i].r-1, getSum1(m, i, i));
 }
 }
 for(int i=0;i<n;i++)
 cout<<getSum(n, i, i)<<" ";
 cout<<endl;
 }while(--t);
 return 0;
}
