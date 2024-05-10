// Problem: A. Arrival of the General
// Contest: Codeforces Round 103 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/144/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat May  4 18:48:29 2024

#include <iostream>
#include <limits>

using namespace std;

int main() {
  int minHeight = numeric_limits<int>().max();
  int maxHeight = 0;
  int minPos = 0, maxPos = 0;
  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    int height;
    cin >> height;

    if (height <= minHeight) {
      minHeight = height;
      minPos = i;
    }

    if (height > maxHeight) {
      maxHeight = height;
      maxPos = i;
    }
  }

  int minSwaps = maxPos + (n - (minPos + 1));

  if (maxPos > minPos) {
    minSwaps--;
  }

	cout << minSwaps << endl;

	return 0;
}
