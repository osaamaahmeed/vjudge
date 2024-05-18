#include <bits/stdc++.h>
using namespace std;
#define ll long long
const double E = exp(1.0);

int main () {
  ll b; cin >> b;
  for (int i = 1; i <= log1pl(b); i++) {
    if (pow(i,i) == b) {
      cout << i;
      return 0;
    }
  }
  cout << "-1";
}