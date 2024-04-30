#include <bits/stdc++.h>
using namespace std;

int main () {
  int n; cin >> n;
  float result = 0;
  for (int i = 0; i < n; i++)
  {
    int x; cin >> x;
    result += x;
  }
  result /= n;
  cout << fixed << setprecision(9) << result;
}