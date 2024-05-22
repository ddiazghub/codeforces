// Problem: A. Petr and Book
// Contest: Codeforces Beta Round 99 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/139/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon May 20 21:03:40 2024

#include <iostream>

using namespace std;

int main() {
  int n, read(0), pages[7];
  cin >> n;

  for (int i = 0; i < 7; i++) {
    cin >> pages[i];
  }

  while (true) {
    for (int i = 0; i < 7; i++) {
      read += pages[i];

      if (read >= n) {
        cout << i + 1 << endl;
        return 0;
      }
    }
  }

  return 0;
}
