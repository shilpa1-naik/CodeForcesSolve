#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int typeable[26] = {0};
    int a[n];
    for( int i = 0; i < k; ++ i) {
	char ch;
	cin >> ch;
	typeable[ch - 'a'] = 1;
    }
    for( int i = 0; i < n; ++i) {
	a[i] = (typeable[s[i] - 'a'] )== 0 ? 0 : 1;
    }

    int f[n+1];
    f[0] = 0;
    long long int ans = 0;
    for( int i = 0; i < n; ++i) {
	if( a[i] == 0) {
	    f[i+1] = 0;
	} else {
	    f[i+1] = f[i] + 1;
	    ans += f[i+1];
	}
    }
    cout << ans << "\n";
	
}
