#include <bits/stdc++.h>
using namespace std;

// for testing purposes
int main() {
	string s;
	cin >> s;
	int n = s.size();
	for (int k = 2; k <= n; k++) {
		string copy = s;
		for (int j = 0; j < n - k + 1; j++) {
			string temp = copy.substr(j, k);
			reverse(temp.begin(), temp.end());
			for (int l = 0; l < (int) temp.size(); l++) {
				copy[j+l] = temp[l];
			}
		}
		cout << k << " = " << copy << "\n";
	}
}
