#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,m,t;
	long long M  = 1e9+7;
	cin>>n>>m;
	for(int i = 0;i<m;i++)cin>>t;
	long long ans = 1;
	for(int i = n;i> m;i--){
		ans = ((i%M)*ans)%M;
	}
	cout<<ans;
	return 0;
}