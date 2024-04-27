// Problem: A. Young Physicist
// Contest: Codeforces Beta Round 63 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/69/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat Apr 27 12:39:14 2024

#include <iostream>
using namespace std;

int main() {
  int n;
  int sum_x(0), sum_y(0), sum_z(0);
  cin >> n;

  for (int i = 0; i < n; i++) {
    int x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;

    sum_x += x;
    sum_y += y;
    sum_z += z;
  }

  if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

	return 0;
}
