// Problem: C. Job Interview
// Contest: Educational Codeforces Round 166 (Rated for Div. 2)
// Judge: Codeforces
// URL: https://codeforces.com/contest/1976/problem/C
// Memory Limit: 256
// Time Limit: 2000
// Start: Thu May 30 10:38:49 2024

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

template <typename T> inline void dbg_array(T arr, size_t n) {
  cout << '[';

  print_array(arr, n, "]", ", ");
}
template <typename T> inline void dbg_map(T m) {
  cout << '{' << endl;

  for (auto [key, value] : m) {
    cout << "  " << key << ": " << value << endl;
  }

  cout << '}' << endl;
}

template <typename T> inline void dbg_set(T s) {
  cout << '{';

  for (auto value : s) {
    cout << value << ", ";
  }

  cout << '}' << endl;
}
template <typename T1, typename T2> inline void dbg(pair<T1, T2> pair) {
  cout << '(' << pair.first << ", " << pair.second << ')' << endl;
}
template <typename T> inline void dbg(vector<T> &arr) {
  dbg_array(arr, arr.size());
}
template <typename T, size_t S> inline void dbg(array<T, S> &arr) {
  dbg_array(arr, arr.size());
}
template <typename T> inline void dbg(T arr[], size_t n) { dbg_array(arr, n); }
template <typename K, typename V> inline void dbg(map<K, V> m) { dbg_map(m); }
template <typename K, typename V> inline void dbg(unordered_map<K, V> m) {
  dbg_map(m);
}
template <typename T> inline void dbg(set<T> s) { dbg_set(s); }
template <typename T> inline void dbg(unordered_set<T> s) { dbg_set(s); }

void solve() {
  int n, m;
  cin >> n >> m;
  int candidates = n + m + 1;
  i64 a[candidates], b[candidates];
  vector<i64> skills(candidates);

  // Read input
  for (int i = 0; i < candidates; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < candidates; i++) {
    cin >> b[i];
  }

  /**
   * pi: (Partition index) index of the arrays where the first position gets filled.
   * p: number of programmers
   * t: number of testers
   * sum: partial sum of the team's skill up to the partition index
   */
  i64 pi(0), p(0), t(0), sum(0);

  // Assign candidates to positions until first position gets filled, count the number of candidates per position and the sum of the team's skill.
  while (p < n && t < m) {
    if (a[pi] > b[pi]) {
      p++;
      sum += a[pi];
    } else {
      t++;
      sum += b[pi];
    }

    pi++;
  }

  i64 total_sum = sum;
  bool p_filled = p == n;

  // Calculate the total sum of the team's skill by calculating the skill contributed by the remaining candidates.
  for (int i = pi; i < candidates; i++) {
    total_sum += p_filled ? b[i] : a[i];
  }

  // Substract each remaining candidate's from the total skill of the team in order to find the total skill of the team if said candidate never presented themselves.
  for (int i = pi; i < candidates; i++) {
    skills[i] = total_sum - (p_filled ? b[i] : a[i]);
  }
  
  /**
   * Calculate the answer for all candidates before the partition index which would not affect this index's value if they were to be removed.
   * This would be testers when programmers is the first position to be filled and programmers when testers is the position to be filled.
   */
  for (int i = 0; i < pi; i++) {
    if (p == n && a[i] < b[i]) {
      skills[i] = total_sum - b[i];
    } else if (t == m && a[i] > b[i]) {
      skills[i] = total_sum - a[i];
    }
  }

  i64 new_pi = pi;
  i64 new_p = p;
  i64 new_t = t;
  i64 new_sum = sum;

  // Remove a candidate from the position that gets filled in order to calculate a new partition index.
  if (p_filled)
    new_p--;
  else
    new_t--;

  // Calculate new pi and sum.
  while (new_p < n && new_t < m) {
    if (a[new_pi] > b[new_pi]) {
      new_p++;
      new_sum += a[new_pi];
    } else {
      new_t++;
      new_sum += b[new_pi];
    }

    new_pi++;
  }

  i64 new_total_sum = new_sum;

  // Calculate new total sum.
  for (int i = new_pi; i < candidates; i++) {
    new_total_sum += new_p == n ? b[i] : a[i];
  }

  // Calculate new team skill for each removed member.
  for (int i = 0; i < pi; i++) {
    if (p == n && a[i] > b[i]) {
      skills[i] = new_total_sum - a[i];
    } else if (t == m && a[i] < b[i]) {
      skills[i] = new_total_sum - b[i];
    }
  }

  for (int i = 0; i < candidates; i++) {
    cout << skills[i] << ' ';
  }
  
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin.clear();

  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
    solve();

  return 0;
}
