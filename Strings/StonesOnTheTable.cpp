#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0;
    for( int i = 0; i < n; ++i) {
	char ch = str[i];
	if( i < n - 1 && str[i + 1] != str[i])
	    continue;
	else {
	    ++i;
	    while( i < n && str[i] == ch) {
		i++;
		count++;
	    }
	    --i;
	}
    }

    cout << count << "\n";
	
	
}
