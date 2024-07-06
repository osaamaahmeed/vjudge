#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  queue<int>q;
  while (t--) {
    int x; cin >> x;
    if (x==1) {
      cin >> x;
      q.push(x);
    } else if (x==2) {
      if (!q.empty()) q.pop();
    } else if (!q.empty()) {
      cout << q.front() << endl;
    }
      else cout << "Empty!\n";
  }
}