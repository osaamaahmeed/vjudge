#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--) {
    ll res = 0;
    int n; cin >> n;
    string s; cin >> s;
    deque<char>d(50);
    // auto it = d.end()-1;
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (char(d.at(0)) != s[i]) {
        d.push_front(s[i]);
        res++;
        }
    }
    cout << "\n================\n";
    for (int i : d) cout << char(i) << " ";
    res += n;
    cout << endl << res << endl;
  }
}