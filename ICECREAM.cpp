#include <bits/stdc++.h>

using namespace std;

int main() {
	//cout <<fixed<<setprecision(10) << M_PI ;
	int t;
	cin >> t;
	while(t--) {
		long double r1, h1, r2, h2;
		cin >> r1 >> h1 >> r2 >> h2;
		long double vcone, vcylin;
		vcylin = M_PI*r2*r2*h2;
		vcone = (M_PI*r1*r1*h1)/3 + (4*M_PI*r1*r1*r1)/6;
		cout << fixed << setprecision(6) << vcone << " "  
		     << fixed << setprecision(6) << vcylin << endl;
	}
	return 0;
} 
