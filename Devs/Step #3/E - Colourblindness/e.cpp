#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string arr[2];
    cin >> arr[0] >> arr[1];
    for (int i = 0; i < n; i++) {
      if (arr[0][i] == 'G' || arr[0][i] == 'B') arr[0][i] = 'x';
      if (arr[1][i] == 'G' || arr[1][i] == 'B') arr[1][i] = 'x';
    }
    if (arr[0] == arr[1]) cout << "YES\n";
    else cout << "NO\n";
  }
}