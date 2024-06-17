// Problem: B. Airport
// Contest: Codeforces Round 134 (Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/problemset/problem/218/B
// Memory Limit: 256
// Time Limit: 2000
// Start: Sat Jun 15 18:10:42 2024

#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>

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

template <typename T, typename C>
i64 airport(priority_queue<int, T, C>&queue, int n) {
  i64 cost = 0;
  
  for (int i = 0; i < n; i++) {
    int top = queue.top();
    queue.pop();
    cost += top;

    if (top > 1) {
      queue.push(top - 1);
    }
  }

  return cost;
}

void solve() {
  int n, m;
  cin >> n >> m;
  priority_queue<int> max_queue;
  priority_queue<int, vector<int>, greater<int>> min_queue;

  for (int i = 0; i < m; i++) {
    int ai;
    cin >> ai;

    if (ai > 0) {
      max_queue.push(ai);
      min_queue.push(ai);
    }
  }

  i64 max_cost = airport(max_queue, n);
  i64 min_cost = airport(min_queue, n);

  cout << max_cost << ' ' << min_cost << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();
  solve();

	return 0;
}
