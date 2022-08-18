#include <iostream>

using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int f[n+1];
    f[0] = 1;
    f[1] = 0;
    for( long long int i = 2; i <= n; ++i) {
	f[i] = 2 * f[i - 2];
    }

    cout << f[n] << "\n";
}
