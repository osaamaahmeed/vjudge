#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

bool isPrime (int n) {
  if (n < 2) return 0;
  else if (n == 2) return 1;
  else if (n % 2 == 0) return 0;
  else {
    for (int i = 3; i <= sqrt(n); i++) {
      if (n % i == 0) return 0;
    }
  }
  return 1;
}

void solve (int a, int b) {
  int counter = 0;
  for (int i = min(a,b); i <= max(a,b); i++) {
    int number = i;
    int mirro=0;
    while (number) {
      mirro *= 10;
      mirro += number % 10;
      number /= 10;
    }
    if (isPrime(i) && isPrime(mirro)) {
      // cout << i << " " << mirro << endl;
      counter++;
    }
  }
  // for (int i = min(a,b); i <= max(a,b); i++) {
  //   string temp = to_string(i);
  //   temp.reserve();
  //   int mirro = stoi(temp);
  //   if (isPrime(i) && isPrime(mirro)) counter++;
  // }
  cout << counter;
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int a,b; cin >> a >> b;
  solve(a,b);
}