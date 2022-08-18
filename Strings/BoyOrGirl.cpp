#include <iostream>
#include <string>

using namespace std;
int main() {
    string str;
    cin >> str;

    int distinctChar[26] = {0};
    for( auto ch : str ) {
	distinctChar[ch - 'a'] = 1;
    }
    int count = 0;
    for(int i = 0 ; i < 26; ++i )
	count += distinctChar[i];

    if(count & 1 )
	cout << "IGNORE HIM!\n";
    else
	cout << "CHAT WITH HER!\n";
}
