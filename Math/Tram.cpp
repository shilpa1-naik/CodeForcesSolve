#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int res = 0;
    int cap = 0;
    while( n-- ) {
	int a, b;
	cin >> a >> b;
	res -= a;
	res += b;
	cap = max(cap,res);
    }

    cout << cap << "\n";
	
}
