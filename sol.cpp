#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	string s;
	cin >> s;
	cout << s;
	// if we try to print the n-th even length positive palindrome it can be observed
	// that it is the position itself combined with its reverse
	// for example, if we want the 15-th even length positive palindrome
	// the answer would be 1551 (15 = first half, 51 = second half)
	reverse(s.begin(), s.end());
	cout << s << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	//cin >> tc;
	for (int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}

