#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;

    string res;
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y' };
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for( auto i : str) {
	if( find(vowels.begin(), vowels.end(), i) != vowels.end()) {
	    continue;
	} else {
	    res += ".";
	    res += i;
	}
    }

    cout << res << "\n";
}
    
