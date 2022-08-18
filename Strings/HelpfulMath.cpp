#include <iostream>
#include <string>

using namespace std;

int main() {
    string inp;
    cin >> inp;
    int one = 0, two = 0, three = 0;
    for( auto i : inp) {
	if( i == '1') one++;
	if( i == '2') two++;
	if( i == '3') three++;
    }
    string res;
    while(one--) {
	res += '1';
	res += '+';
    }
    while(two--) {
	res += '2';
	res += '+';
    }

    while(three--) {
	res += '3';
	res += '+';
    }
    res.pop_back();
    cout << res << endl;
	    
}
    
