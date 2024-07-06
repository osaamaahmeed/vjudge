#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    int freq[91] = {0};
    for (int i = 0; i < n; i++) freq[s[i]]++;
    int sum = 0;
    for (int i = 0; i < 91; i++) {
      if (freq[i] > 0) sum++;
      sum += freq[i];
    }
    cout << sum << '\n';
  }
}