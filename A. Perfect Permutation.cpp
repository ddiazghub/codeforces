// Problem: A. Perfect Permutation
// Contest: Codeforces Round 144 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/233/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat May  4 17:34:09 2024

#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  if (n % 2 > 0) {
    cout << -1 << endl;
  } else {
    for (int i = 0; i < n; i += 2) {
      cout << i + 2 << ' ' << i + 1 << ' ';
    }

    cout << endl;
  }

	return 0;
}
