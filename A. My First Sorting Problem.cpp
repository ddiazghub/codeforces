// Problem: A. My First Sorting Problem
// Contest: Codeforces Round 944 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1971/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Fri May 10 09:38:30 2024

#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;

    if (a < b)
      cout << a << ' ' << b << endl;
    else
      cout << b << ' ' << a << endl;
  }

	return 0;
}
