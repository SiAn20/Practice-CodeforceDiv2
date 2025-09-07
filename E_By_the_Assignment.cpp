/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

void solve() {
  int n, m, V;
  cin >> n >> m >> V;
  vector<int> weight(n);
  for (int &x : weight)
    cin >> x;

  vector<vector<int>> a(n);
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    a[u].push_back(v);
    a[v].push_back(u);
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
    solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/