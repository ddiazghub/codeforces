// Problem: B. Pashmak and Flowers
// Contest: Codeforces Round 261 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/459/B
// Memory Limit: 256
// Time Limit: 1000
// Start: Sat Jun 15 18:59:39 2024

#include <bits/stdc++.h>

using namespace std;

typedef long long i64;
typedef int i32;

const i32 I32_MAX = numeric_limits<i32>().max();
const i64 I64_MAX = numeric_limits<i64>().max();

const string YES = "YES";
const string NO = "NO";

template <typename T> inline void print_array(T arr, size_t n, string end = "", string separator = " ") {
  for (int i = 0; i < n - 1; i++) {
    cout << arr[i] << separator;
  }

  cout << arr[n - 1] << end << endl;
}

template <typename T> inline void print(vector<T> &arr) { print_array(arr, arr.size()); }
template <typename T, size_t S> inline void print(array<T, S> &arr) { print_array(arr, arr.size()); }
template <typename T> inline void print(T arr[], size_t n) { print_array(arr, n); }

template <typename T> inline void dbg_array(T arr, size_t n) {
  cout << '[';

  print_array(arr, n, "]", ", ");
}
template <typename T> inline void dbg_map(T m) {
  cout << '{' << endl;

  for (auto [key, value]: m) {
    cout << "  " << key << ": " << value << endl;
  }

  cout << '}' << endl;
}

template <typename T> inline void dbg_set(T s) {
  cout << '{';

  for (auto value: s) {
    cout << value << ", ";
  }

  cout << '}' << endl;
}
template <typename T1, typename T2> inline void dbg(pair<T1, T2> pair) {
  cout << '(' << pair.first << ", " << pair.second << ')' << endl;
}
template <typename T> inline void dbg(vector<T> &arr) { dbg_array(arr, arr.size()); }
template <typename T, size_t S> inline void dbg(array<T, S> &arr) { dbg_array(arr, arr.size()); }
template <typename T> inline void dbg(T arr[], size_t n) { dbg_array(arr, n); }
template <typename K, typename V> inline void dbg(map<K, V> m) { dbg_map(m); }
template <typename K, typename V> inline void dbg(unordered_map<K, V> m) { dbg_map(m); }
template <typename T> inline void dbg(set<T> s) { dbg_set(s); }
template <typename T> inline void dbg(unordered_set<T> s) { dbg_set(s); }

void solve() {
  int n;
  cin >> n;
  map<i64, i64> flowers;

  for (int i = 0; i < n; i++) {
    i64 b;
    cin >> b;
    flowers[b]++;
  }
  
  auto minimum = flowers.cbegin();
  auto maximum = flowers.crbegin();
  i64 diff = maximum->first - minimum->first;
  i64 ways = diff == 0 ? maximum->second * (maximum->second - 1) / 2 : maximum->second * minimum->second;

	cout << diff << ' ' << ways << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();
  solve();

	return 0;
}
