#include <bits/stdc++.h>
using namespace std;

bool is_lexi_smaller(string a, string b) {
	if (a == b) {
		return false;
	}
	for (int i = 0; i < (int) a.size(); i++) {
		if (a[i] < b[i]) {
			return true;
		}
		if (a[i] > b[i]) {
			return false;
		}
	}
	return true;
}

void test_case() {
	int n;
	string s;
	cin >> n >> s;
	string b = s;
	int ans = 1;
	// cout << s << "\n";
	for (int k = 2; k <= n; k++) {
		string str = s.substr(n - (n - k + 1), n);
		if (k < n) {
			string temp = s.substr(0, n - (n - k + 1));
			if (k % 2 == n % 2) { // must have the same parity
				reverse(temp.begin(), temp.end());
			}
			str += temp;
		} else {
			str = s;
			reverse(str.begin(), str.end());
		}
		if (is_lexi_smaller(str, b)) {
			b = str;
			ans = k;
		}
		// cout << k << " = " << str << "\n";
	}
	cout << b << "\n" << ans << "\n";
	// cout << "------\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case();
	}
}
