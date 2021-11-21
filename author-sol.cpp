#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<long long> a(n);
		// view the image in this repository for the derivation of formula
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		sum = sum / (n - 1);
		for (int i = 0; i < n; i++) {
			cout << sum - a[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}
