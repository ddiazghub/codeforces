// Problem: A. Parallelepiped
// Contest: Codeforces Round 138 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/224/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon May 20 21:14:45 2024

#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int z = sqrt(b * c / a);
  int y = c / z;
  int x = a / y;

  cout << (x + y + z) * 4 << endl;

  return 0;
}
