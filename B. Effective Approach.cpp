// Problem: B. Effective Approach
// Contest: Codeforces Round 140 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/227/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat May 18 11:12:26 2024

#include <iostream>
#include <map>

using namespace std;

int main() {
  map<int, int> pos;
  long long forward = 0;
  long long backwards = 0;
  
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    pos[a] = i;
  }

  int m;
  cin >> m;

  for (int i = 0; i < m; i++) {
    int b;
    cin >> b;
    forward = forward + pos[b] + 1;
    backwards = backwards + n - pos[b];
  }

  cout << forward << ' ' << backwards << endl;

	return 0;
}
