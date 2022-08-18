#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum1 = 0, sum2 = 0, sum3 = 0;

    while( n-- ) {
	int a; cin >> a;
	sum1 += a;
	int b; cin >> b;
	sum2 += b;
	int c; cin >> c;
	sum3 += c;
    }
    if( sum1 == 0 && sum2 == 0 && sum3 == 0 ) {
	cout << "YES\n";
    } else
	cout << "NO\n";
}
