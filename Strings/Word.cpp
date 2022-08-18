#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    int upper = 0;
    int lower = 0;

    for( auto ch : str) {
	if( ch >= 'A' && ch <= 'Z')  upper++;
	else lower++;
    }
    if( upper > lower )
	transform( str.begin(), str.end(), str.begin(), ::toupper);
    else
	transform(str.begin(), str.end(), str.begin(), ::tolower);

    cout << str << "\n";
			  
}
    
