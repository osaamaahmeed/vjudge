#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    int counter = 0;
    while (s.find("()") != s.npos) {
      s.erase(s.find("()"), 2);
    }
    for (int i = 0; i < s.size(); i++) if (s[i] == ')') counter++;
    cout << counter << endl;  
  }
}