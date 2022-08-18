#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int count1 = 0, count0 = 0;
    for ( auto ch : str ) {
	count0 = (ch == '1' ? 0 : count0+1 );
	count1 = ( ch == '1' ? count1 + 1 : 0 );
	if( count1 >= 7 || count0 >= 7 ) {
	    cout << "YES\n";
	    return 0;
	}
    }
    cout << "NO\n";
}
    
