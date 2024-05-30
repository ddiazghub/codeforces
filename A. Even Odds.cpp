// Problem: A. Even Odds
// Contest: Codeforces Round 188 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/318/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Tue May 28 21:15:25 2024

#include <iostream>

using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;
  long long half = (n + 1) / 2;

  if (k <= half) {
    cout << 1 + (k - 1) * 2 << endl;
  } else {
    cout << (k - half) * 2 << endl;
  }

	return 0;
}
