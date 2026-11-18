//  Serval and Mocha's Array (Z)
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
		int GCD = 0;
		for( int i = 0 ; i < n ; i++ ) {
			for( int j = i+1 ; j < n ; j++ ) {
				if( __gcd( v[i] , v[j] ) < 3 ) {
					GCD = 1;
				}
			}
		}
		if( GCD == 1 )
			cout << "YES\n" ;
		else
			cout << "NO\n" ;
	}
}
