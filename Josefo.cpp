#include <bits/stdc++.h>

using namespace std;

int josefo(int n) {
  int k;
  for (k = 1; 1 << (k + 1) <= n; k++);
  int p = n - (1 << k);

  return 2 * p + 1;
}

int main() {
  int n;
  cin >> n;
  cout << josefo(n) << endl;

  return 0;
}
