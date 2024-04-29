#include <bits/stdc++.h>
using namespace std;

int main () {
  int r,g,b; cin >> r >> g >> b;
  int num = r;
  num *= 10;
  num += g;
  num *= 10;
  num += b;
  num % 4 == 0 ? cout << "YES" : cout << "NO";
}