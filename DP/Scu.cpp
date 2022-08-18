#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int dp[1001][21][21] = {-1};
long long int solve( vector<int> weights, vector<int> oxy, vector<int> nit, int i, int ro, int rn, int n) {

    if( i >= n ) {
	return INT_MAX;
    }
    if( ro <= 0 && rn <= 0 ) {
	return 	0;
    }
    if(dp[i][ro][rn] != -1) {
	return dp[i][ro][rn];
    }
    //    cout << i << " " << ro << " " << rn << "\n";
    long long int include = weights[i] + solve(weights, oxy, nit, i + 1, ro - oxy[i], rn - nit[i], n);
    long long int a1 = solve(weights, oxy, nit, i+1, ro, rn, n);

    dp[i][ro][rn] =  min(a1, include);
    return dp[i][ro][rn];
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

	for( int i = 0; i < 1001; ++i ) {
	    for( int j = 0; j < 21 ;++j ) {
		for( int k = 0; k < 21; ++k ) {
		    dp[i][j][k] = -1;
		}
	    }
	}
	int ans = solve(weights, oxy, nit, 0, ro, rn, n);
	cout << ans << "\n";
    }
	
}
