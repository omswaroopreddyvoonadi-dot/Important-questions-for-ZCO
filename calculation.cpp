// Unit Array (S)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    for( int i = 0 ; i < t ; i++ ) {
        int n; cin >> n;
        int MAX = 0;
        vector <int> v(n);
        for( int i = 0 ; i < n ; i++ ) {
            cin >> v[i];
            MAX = max( MAX , v[i] ) ;
        }
        set <int> s;
        for( auto c: v ) {
            s.insert(v[c]);
        }
        vector <int> v1(MAX);
        for( int i = 0 ; i < MAX ; i++ ) {
            v[i] = i+1 ;
        }
        if( s.size() == v.size() ){
            for( int i = 0 ; i < v.size() ; i++ ) {
                cout << v[i] << " " ;
            }
            cout << endl;
        }
    }
}