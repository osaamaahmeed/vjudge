#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool newWords (int n, string words[]) {
  for (int i = 0; i < n-1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (words[i] == words[j]) return 0;
    }
  }
  return 1;
}

bool lastChar (int n, string words[]) {
  for (int i = 0; i < n-1; i++) {
    if (words[i].back() != words[i+1].front()) return 0;
  }
  return 1;
}

int main () {
  int n; cin >> n;
  string words[n];
  for (int i = 0; i <n; i++) cin >> words[i];
  // cout << newWord << endl << lastChar;
  if (newWords(n,words) && lastChar(n,words)) cout << "Yes";
  else cout << "No";
}