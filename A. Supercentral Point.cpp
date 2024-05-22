// Problem: A. Supercentral Point
// Contest: Codeforces Round 112 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/165/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat May 18 12:28:00 2024

#include <iostream>

using namespace std;

int main() {
  int n, count(0);
  cin >> n;
  int x[n], y[n];

  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }

  for (int i = 0; i < n; i++) {
    bool left(false), right(false), up(false), down(false);

    for (int j = 0; j < n; j++) {
      if (x[i] > x[j] && y[i] == y[j])
        right = true;

      if (x[i] < x[j] && y[i] == y[j])
        left = true;

      if (x[i] == x[j] && y[i] < y[j])
        down = true;

      if (x[i] == x[j] and y[i] > y[j])
        up = true;
    }

    if (left && right && up && down)
      count++;
  }

  cout << count << endl;

  return 0;
}
