#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ll b; cin >> b;
  for (int i = 1; i < b; i++) {
    if (pow(i,i) == b) {
      cout << i;
      return 0;
    }
  }
  cout << "-1";
}