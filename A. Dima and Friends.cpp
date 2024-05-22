// Problem: A. Dima and Friends
// Contest: Codeforces Round 167 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/272/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat May 11 12:23:09 2024

#include <iostream>

using namespace std;

int main() {
  int n, fingers = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    fingers += x;
  }

  fingers %= n + 1;
  int output = 0;

  for (int i = 1; i <= 5; i++) {
    if ((fingers + i) % (n + 1) != 1) {
      output++;
    }
  }

  cout << output << endl;

	return 0;
}
