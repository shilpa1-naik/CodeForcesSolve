#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    string hel = "hello";
    int i = 0;
    for( auto s : str) {
	if(hel[i] == s ) {
	    i++;
	}
    }
    cout << (i >= 5 ? "YES" : "NO") << "\n";
	
}
