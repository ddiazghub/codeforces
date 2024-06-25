#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - (i + 1); j++) {
      cout << ' ';
    }

    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    
    cout << '\n';
  }

  for (int i = 0; i < n - 1; i++) {
    cout << ' ';
  }
  cout << '*' << endl;

  return 0;
}

