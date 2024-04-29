// Problem: B. Queue at the School
// Contest: Codeforces Round 163 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/266/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Mon Apr 29 10:03:20 2024

#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main() {
  int n, t;
  string queue;
  bool swaps = true;

  cin >> n >> t >> queue;

  while (swaps && t-- > 0) {
    swaps = false;

    for (int i = 0; i < queue.size(); i++) {
      if (queue[i] == 'B' && queue[i + 1] == 'G') {
        swap(queue[i], queue[i + 1]);
        i++;
        swaps = true;
      }
    }
  }

  cout << queue << endl;

  return 0;
}
