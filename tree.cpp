#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  int n;
  cin >> n;

  char spaces[n];
  char buffer[2 * n];

  fill(spaces, spaces + n - 1, ' ');

  for (int i = 0; i < n; i++) {
    buffer[2 * i] = '*';
    buffer[2 * i + 1] = ' ';
  }

  spaces[n - 1] = '\0';
  buffer[2 * n] = '\0';

  cout << spaces << "*\n";

  for (int row = 1; row < n - 1; row++) {
    spaces[n - (row + 1)] = '\0';
    buffer[2 * row + 1] = '\0';
  
    cout << spaces << buffer << '\n';

    spaces[n - (row + 1)] = ' ';
    buffer[2 * row + 1] = ' ';
  }
  
  if (n > 1) {
    cout << buffer << '\n';
  }

  cout << spaces << '*';

  return 0;
}

