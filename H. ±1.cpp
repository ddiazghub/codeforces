// Problem: H. ±1
// Contest: Codeforces Round 944 (Div. 4)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1971/problem/H
// Memory Limit: 256
// Time Limit: 2000
// Start: Fri May 24 20:59:03 2024

#include <array>
#include <iostream>
#include <vector>

const int ROWS = 3;

using namespace std;

vector<int> aliceArrayFrom(int num, int n) {
  vector<int> arr;

  for (int i = 1; i < n; i <<= 1) {
    if ((i & num) > 0)
      arr.push_back(1);
    else
      arr.push_back(-1);
  }

  return arr;
}

void solve() {
  int n;
  cin >> n;
  array<vector<int>, ROWS> grid{vector<int>(n), vector<int>(n), vector<int>(n)};

  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < n; j++) {
      cin >> grid[i][j];
    }
  }

  int shift = 1 << n;

  for (int i = 0; i < shift; i++) {
    bool stop = false;

    for (int col = 0; col < n && !stop; col++) {
      int count = 0;

      for (int row = 0; row < 3; row++) {
        int value = grid[row][col];

        if (value < 0) {
          //cout << "VAL: " << value << " SHIFTED: " << (1 << ((-value) - 1)) << endl;
          if ((i & (1 << (abs(value) - 1))) == 0) {
            count++;
          }
        } else {
          if ((i & (1 << (value - 1))) == 1) {
            count++;
          }
        }
      }

      cout << "I: " << i << " Count: " << count << ' ';

      if (count < 2)
        stop = true;
    }
    cout << endl;

    if (stop == false) {
      cout << "YES" << endl;
      return;
    }
  }

  cout << "NO" << endl;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < 16; i++) {
    auto arr = aliceArrayFrom(i, 16);

    for (auto num: arr){
      cout << num << ' ';
    }

    cout << endl;
  }
  // for (int test = 0; test < t; test++) {
  //   solve();
  // }

  return 0;
}
