#include <iostream>
#include <string>
#include <algorithm> 
#include <locale>  
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);

    transform(b.begin(), b.end(), b.begin(), ::tolower);

    for(int i = 0; i < a.length(); ++i){
	char first = a[i];
	char second = b[i];
	if( first  - second == 0 ) {
	    continue;
	} else if ( first - second < 0 ) {
	    cout << "-1\n";
	    return 0;
	} else {
	    cout << "1\n";
	    return 0;
	}
    }

    cout << "0\n";
    
}
