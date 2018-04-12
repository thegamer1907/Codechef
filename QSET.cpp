#include<bits/stdc++.h>
#define ll long long

using namespace std;

struct node
{
    ll pc[3],sc[3],sum,ans;
};


node combine(node a,node b)
{   node temp;

    temp.ans = a.ans + b.ans + a.sc[0]*b.pc[0] + a.sc[2]*b.pc[1] + a.sc[1]*b.pc[2];

    temp.sum = (a.sum + b.sum)%3;


    /*temp.pc[0] = a.pc[0] + b.pc[ (3 - (0 + a.sum))%3];
    temp.pc[1] = a.pc[1] + b.pc[ (3 - (1 + a.sum))%3];
    temp.pc[2] = a.pc[2] + b.pc[ (3 - (2 + a.sum))%3];*/

    if(a.sum == 0){
        temp.pc[0] = a.pc[0] + b.pc[0];
        temp.pc[1] = a.pc[1] + b.pc[1];
        temp.pc[2] = a.pc[2] + b.pc[2];
    }
    else if(a.sum == 1){
        temp.pc[0] = a.pc[0] + b.pc[2];
        temp.pc[1] = a.pc[1] + b.pc[0];
        temp.pc[2] = a.pc[2] + b.pc[1];
    }
    else if(a.sum == 2){
        temp.pc[0] = a.pc[0] + b.pc[1];
        temp.pc[1] = a.pc[1] + b.pc[2];
        temp.pc[2] = a.pc[2] + b.pc[0];
    }

    if(b.sum == 0){
        temp.sc[0] = b.sc[0] + a.sc[0];
        temp.sc[1] = b.sc[1] + a.sc[1];
        temp.sc[2] = b.sc[2] + a.sc[2];
    }
    else if(b.sum == 1){
        temp.sc[0] = b.sc[0] + a.sc[2];
        temp.sc[1] = b.sc[1] + a.sc[0];
        temp.sc[2] = b.sc[2] + a.sc[1];
    }
    else if(b.sum == 2){
        temp.sc[0] = b.sc[0] + a.sc[1];
        temp.sc[1] = b.sc[1] + a.sc[2];
        temp.sc[2] = b.sc[2] + a.sc[0];
    }

	return temp;
}

void construct(int *a,int s,int e,int index,node *q)
{
	if(s==e){
        for(int i = 0;i<3;i++){
            q[index].pc[i] = 0;
            q[index].sc[i] = 0;
        }
        q[index].sum = a[e]%3;
        q[index].pc[a[e]%3]++;
        q[index].sc[a[e]%3]++;

        q[index].ans = a[e]%3 == 0 ? 1 : 0;
	}
	else
	{
        int mid=s+(e-s)/2;
		construct(a,s,mid,2*index,q);
		construct(a,mid+1,e,2*index+1,q);
		q[index]=combine(q[2*index],q[2*index+1]);
	}
}

node query(int x,int y,int index,int rl,int rr,node *q)
{
	if(x<=rl&&y>=rr){
		return q[index];
	}
	else if(x>rr||y<rl)
	{
        node temp;

        for(int i = 0;i<3;i++){
            temp.pc[i] = 0;
            temp.sc[i] = 0;
        }
        temp.sum = 0;
        temp.ans = 0;

        return temp;
	}
	else
	{
	    int mid= (rl+rr)/2;
		node p=query(x,y,index*2,rl,mid,q);
		node q1=query(x,y,index*2+1,mid+1,rr,q);
		return combine(p,q1);
	}
}

void update(int index,int st,int en,int l,int r,int val,node *q)
{
    if(l>en || r<st || st>en)
        return;
    if(st==en)
    {
        for(int i = 0;i<3;i++){
            q[index].pc[i] = 0;
            q[index].sc[i] = 0;
        }
        q[index].sum = val%3;
        q[index].pc[val%3]++;
        q[index].sc[val%3]++;

        q[index].ans = val%3 == 0 ? 1 : 0;
        return;
    }
    int mid = (st+en)/2;
    update(2*index,st,mid,l,r,val,q);
    update(2*index+1,mid+1,en,l,r,val,q);
    q[index] = combine(q[2*index],q[2*index+1]);
}

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);

    int N,M;

    cin>>N>>M;
    int a[N+1];
    node q[1000000];


    for(int i = 1;i<=N;i++){
        char c;
        cin>>c;
        a[i] = c - 48;
    }

    construct(a,1,N,1,q);
    for(int i = 0;i<M;i++){
        int type;
        cin>>type;

        if(type == 1){
            int k,x;
            cin>>k>>x;

            update(1,1,N,k,k,x,q);
        }
        else{
            int m,n;

            cin>>m>>n;

            node a = query(m,n,1,1,N,q);

            cout<<a.ans<<endl;
        }
    }

    return 0;
}
