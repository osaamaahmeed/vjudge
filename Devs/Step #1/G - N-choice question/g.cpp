#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n,a,b; cin >> n >> a >> b;
  int arr[n];
  for (int i =0; i < n; i++) cin >> arr[i];

  for (int i = 0; i < n; i++) {
    if (arr[i] == a+b) {
      cout << i+1;
      return 0;
  }
}
}