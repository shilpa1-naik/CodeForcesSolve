#include <iostream>

using namespace std;

int main() {
    int n,x;
    cin >> n >> x;
    string str;
    cin >> str;
	
    while( x-- ) {
	for( int i = 0; i < n - 1; i++ ) {
	    if( str[i+1] == 'G' && str[i] == 'B') {
		str[i+1] = 'B';
		str[i] = 'G';
		i++;
	    }
	}
    }
    cout << str << "\n";
	
}
