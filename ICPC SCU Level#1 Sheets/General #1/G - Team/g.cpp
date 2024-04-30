#include <bits/stdc++.h>
using namespace std;

int main () {
  int t; cin >> t;
  int result = 0;
  while (t--) {
    int solve = 0;
    for (int i = 0; i < 3; i++)
    {
      int n; cin >> n;
      if (n == 1) solve++;
    }
    if (solve >= 2) {
      result++;
      solve = 0;
    }
  }
  cout << result;
}