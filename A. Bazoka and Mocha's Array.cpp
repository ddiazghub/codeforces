// Problem: A. Bazoka and Mocha's Array
// Contest: Codeforces Round 947 (Div. 1 + Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1975/problem/A
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat May 25 11:52:04 2024

#include <iostream>

using namespace std;

bool isSortedFrom(int arr[], int n, int start) {
  for (int i = start + 1; i < n; i++) {
    if (arr[i] < arr[i - 1]) {
      return false;
    }
  }

  return arr[n - 1] <= arr[0];
}

string solve() {
  int n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 1; i < n; i++) {
    if (a[i] < a[i - 1]) {
      if (isSortedFrom(a, n, i)) {
        return "Yes";
      }

      return "No";
    }
  }

  return "Yes";
}

int main() {
  int t;
  cin >> t;

  for (int test = 0; test < t; test++) {
    cout << solve() << endl;
  }

  return 0;
}
