#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  #ifndef ONLINE_JUDGE
        freopen("bcount.in", "r", stdin), freopen("bcount.out", "w", stdout);
  #endif
  int n,q; cin >> n >> q;
  vector<int>v1(n,0),v2(n,0),v3(n,0);
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    if (x == 1) v1[i]++;
    else if (x == 2) v2[i]++;
    else v3[i]++;
  }
  for (int i = 0; i < n-1; i++) {
    if (i < v1.size()) v1[i+1] += v1[i];
    if (i < v2.size()) v2[i+1] += v2[i];
    if (i < v3.size()) v3[i+1] += v3[i];
  }
  // for (int i : v1) cout << i << " ";
  // cout << endl;
  // for (int i : v2) cout << i << " ";
  // cout << endl;
  // for (int i : v3) cout << i << " ";
  // cout << endl;
  int a,b;
  while (q--) {
    cin >> a >> b;
    if (a == 1) cout << v1[b-1] << " " << v2[b-1] << " " << v3[b-1] << endl;
    else {
      cout << v1[b-1] - v1[a-2] << " "
      << v2[b-1] - v2[a-2] << " "
      << v3[b-1] - v3[a-2] << endl;
    }
  }
}