// Problem: B. Binary Colouring
// Contest: Codeforces Round 948 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1977/problem/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sun May 26 09:50:54 2024

#include <iostream>
#include <utility>
#include <vector>

using namespace std;

pair<int, int> nextPowerOf2(int val) {
  for (int i = 0; i < 31; i++) {
    int power2 = 1 << i;

    if (power2 >= val)
      return {i, power2};
  }

  return {-1, -1};
}

bool recurse(vector<int> &arr, int offset, int size) {

  if (offset == 0)
    return true;

  if (size <= 0)
    return false;

  int ai = offset < 0 ? -1 : 1;

  arr[size - 1] = ai;
  int newOffset = offset - ai * (1 << (size - 1));

  if (recurse(arr, newOffset, size - 2)) {
    return true;
  }

  arr[size - 1] = 0;

  if (recurse(arr, offset, size - 1)) {
    return true;
  }

  return false;
}

pair<int, vector<int>> solve(int x) {
  // int x;
  // cin >> x;

  auto [n, nextPower] = nextPowerOf2(x);
  n++;
  vector<int> arr(n, 0);

  arr[n - 1] = 1;

  if (nextPower == x || recurse(arr, x - nextPower, n - 2)) {
    return {n, arr};
  }

  arr[n - 1] = 0;
  arr[n - 2] = 1;
  recurse(arr, x - nextPower / 2, n - 3);

  return {n - 1, arr};
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < 1; i++) {
    auto [n, arr] = solve(14);

    cout << n << endl;

    for (int j = 0; j < n; j++) {
      cout << arr[j] << ' ';
    }

    cout << endl;
  }

  return 0;
}

