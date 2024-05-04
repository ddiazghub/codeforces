// Problem: A. Nearly Lucky Number
// Contest: Codeforces Beta Round 84 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/110/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri May  3 22:06:26 2024

#include <iostream>

using namespace std;

inline bool luckyDigit(int n) {
  return n == 4 || n == 7;
}

int main() {
  long long n;
  int count = 0;
  cin >> n;

  while (n > 0) {
    int digit = n % 10;

    if (luckyDigit(digit))
      count++;

    n /= 10;
  }

  cout << (luckyDigit(count) ? "YES" : "NO") << endl;

  return 0;
}
