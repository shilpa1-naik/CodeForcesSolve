#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int quo = n / 5;
    int rem = n % 5;
    cout << quo + (rem > 0 ? 1 : 0) << endl;
}

