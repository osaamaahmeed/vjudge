#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve (int n) {
  int number = 0;
  int temp = n;
  while (temp) {
    number += temp % 10;
    temp /= 10;
  }
  if (number % 4 == 0) cout << n;
  else {
    n++;
    solve(n);
  }
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  solve(n);
}