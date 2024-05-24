// Problem: A. Is your horseshoe on the other hoof?
// Contest: Codeforces Round 141 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/228/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu May 23 20:58:11 2024

#include <iostream>
#include <set>

using namespace std;

int main() {
  set<int> colors;

  for (int i = 0; i < 4; i++) {
    int s;
    cin >> s;
    colors.insert(s);
  }

	cout << 4 - colors.size() << endl;

	return 0;
}
