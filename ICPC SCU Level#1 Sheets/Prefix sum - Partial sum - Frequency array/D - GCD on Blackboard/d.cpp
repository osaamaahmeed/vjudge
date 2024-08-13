#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve (int x, vector<int>v) {
  int prevNumber;
    for (size_t i = 2; i*i <= x; i++) {
    while (x % i == 0) {
      x /= i;
      res.push_back(i);
      v[i]++;
    }
  }
  if (n != 1) { // the number is already prime and also if the number is after the i*i
    res.push_back(n);
  }
} 

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  // int freq[n] = {0};
  vector<int>v(0);
  while (n--) {
    int x; cin >> x;
    solve(x, v);
  }
}
