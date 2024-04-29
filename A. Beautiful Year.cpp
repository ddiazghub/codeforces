// Problem: A. Beautiful Year
// Contest: Codeforces Round 166 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/271/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon Apr 29 10:31:56 2024

#include <iostream>
using namespace std;

bool hasDistinctDigits(int n) {
  int bitmask = 0;

  while (n > 0) {
    int digit = n % 10;
    int shift = 1 << digit;

    if ((bitmask & shift) > 0) {
      return false;
    }

    bitmask |= shift;
    n /= 10;
  }

  return true;
}

int main() {
  int year;
  cin >> year;

  year++;

  while (!hasDistinctDigits(year)) {
    year++;
  }

	cout << year << endl;

	return 0;
}
