#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,q; cin >> n >> q;
  deque<int>v(n); for (int i=0; i < n; i++) cin >> v[i];
  while (q--) {
    int x; cin >> x;
    for (int i = 0; i < n; i++) {
      if (v[i] == x) {
        cout << i+1 << " ";
        int temp = v[i];
        v.erase(v.begin()+i);
        v.push_front(temp);
        break;
      }
    }
  }
}