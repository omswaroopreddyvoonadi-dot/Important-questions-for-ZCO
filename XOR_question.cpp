// We Need the Zero (X)
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t; cin >> t; 
	for( int i = 0 ; i < t ; i++ ) {
		int n; cin >> n;
		vector <int> v(n);
		for( int i = 0 ; i < n ; i++ ) {
			cin >> v[i];
		}
		int x = 0;
		for( int i = 0 ; i < n ; i++ ) {
			x = x ^ v[i];
		}
		if( x == 0 && n % 2 == 0 )
			cout << "3\n" ;
		else if( x != 0 && n % 2 == 0 )
			cout << "-1\n" ;
		else if( n % 2 == 1 )
			cout << x << "\n" ;
	}
}