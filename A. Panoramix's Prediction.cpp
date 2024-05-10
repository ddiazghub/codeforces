// Problem: A. Panoramix's Prediction
// Contest: Codeforces Beta Round 69 (Div. 2 Only)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/80/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat May  4 17:16:08 2024

#include <iostream>
#include <ostream>

using namespace std;

bool isPrime(int n) {
  if (n == 2 || n == 3)
    return true;

  if (n % 2 == 0 || n % 3 == 0)
    return false;

  for (int i = 5; i < n / 3; i += 2)
    if (n % i == 0)
      return false;

  return true;
}

int main() {
  int n, m;
  cin >> n >> m;

  if (!isPrime(m)) {
    cout << "NO" << endl;

    return 0;
  }

  for (int i = n + 1; i < m; i++) {
    if (isPrime(i)) {
      cout << "NO" << endl;

      return 0;
    }
  }

  cout << "YES" << endl;

  return 0;
}
