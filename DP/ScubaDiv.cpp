#include <iostream>
#include <vector>

using namespace std;

int solve( vector<int> weights, vector<int> oxy, vector<int> nit, int i, int ro, int rn, int n) {
    cout << i << " " << ro << " " << rn << " " << weights[i] << "\n";
    if( i >= n ) {
	return INT_MAX;
    }
    int include = INT_MAX;
    if( ro >= oxy[i] && rn >= nit[i] ) {
	include = weights[i] + solve(weights, oxy, nit, i + 1, ro - oxy[i], rn - nit[i], n);
	return min(solve(weights, oxy, nit, i+1, ro, rn, n), include);	
    }  else
	return solve(weights, oxy, nit, i+1, ro, rn, n);

}

int main() {
    int t;
    cin >> t;
    while( t--)  {
	int ro, rn;
	cin >> ro >> rn;
	int n;
	cin >> n;
	vector<int> weights(n, 0);
	vector<int> oxy(n, 0);
	vector<int> nit(n, 0);
	for( int i = 0; i < n; ++i ) {
	    cin >> oxy[i] >> nit[i] >> weights[i];
	}

	int ans = solve(weights, oxy, nit, 0, ro, rn, n);
	cout << ans << "\n";
    }
	
}
