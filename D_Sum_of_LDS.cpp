// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int n, ans,tam=2;
  cin >> n;
  vector<int> p(n);
  ans = n;

  for (int &x : p)
    cin >> x;

  for (int j = 0; j < n; ++j) {
    int count = 1;
    for (int i = j; i < tam; ++i) {
      if (p[i] > p[i + 1]) {
        count++;
      }
      ans += count;
    }
    tam++;
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

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