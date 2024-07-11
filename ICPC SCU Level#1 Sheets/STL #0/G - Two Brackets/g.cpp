#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void solve (string s) {
  int counter = 0;
  int openIndex = INT_MAX,closeIndex = INT_MIN;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(' || s[i] == '[') {
      openIndex = i;
    } else if (s[i] == ')' || s[i] == ']') {
      closeIndex = i;
    }
    if (openIndex < closeIndex) counter++;
  }
  cout << counter << endl;
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    solve(s);
  }
  
}