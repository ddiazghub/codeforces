// Problem: A. I_love_%username%
// Contest: Codeforces Round 109 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/155/A
// Memory Limit: 256
// Time Limit: 2000
// Start: Wed May 22 21:33:44 2024

#include <iostream>

using namespace std;

int main() {
  int n, maxPoints, amazingPerformances = 0;
  cin >> n;
  cin >> maxPoints;

  int minPoints = maxPoints;

  for (int i = 1; i < n; i++) {
    int points;
    cin >> points;
    
    if (points > maxPoints) {
      amazingPerformances++;
      maxPoints = points;
    } else if (points < minPoints) {
      amazingPerformances++;
      minPoints = points;
    }
  }

	cout << amazingPerformances << endl;

	return 0;
}
