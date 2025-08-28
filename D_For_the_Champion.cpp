// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
  int n, x=0, y=0, sr, sl, su, sd;
  cin >> n;
  while (n--) {
    int xi,yi;
    cin >> xi >> yi;
  }

  // aumento lo mas en y
  cout << "? D 1000000000" << endl;
  cin >> sd;
  cout << "? U 2000000000" << endl;
  cin >> su;

  y += (su - sd + 2000000000) / 2;

  // aumento lo mas en x
  cout << "? L 1000000000" << endl;
  cin >> sl;
  cout << "? R 2000000000" << endl;
  cin >> sr;

  x += (sr - sl + 2000000000) / 2;

  cout << "! " << x << " " << y << endl;
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