#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, a, b;
	cin >> n >> a >> b;
	int start = a + 1; // starting position of Petr
	// 1 2 3 4 5 6 7 8 9
	// X X X X P P P P X
	// min(n, start + n) = end position of peter
	// calculate the difference of the start and ending position (no. of possible positions) + 1
	cout << min(n, start + b) - start + 1 << '\n';
	return 0;
}