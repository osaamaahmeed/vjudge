#include <bits/stdc++.h>
using namespace std;

int main () {
  int a,b; cin >> a >> b;
  int cookies = a + b;
  if (cookies % 3 == 0 || a % 3 == 0 || b % 3 == 0) cout << "Possible";
  else cout << "Impossible";
}