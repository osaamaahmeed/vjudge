#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool pali(string s) {
  // int reverseIndex = s.size()-1;
  // for (int i = 0; i < s.size()/2; i++) {
  //   if (s[i] == s[reverseIndex]) {
  //     reverseIndex--;
  //   } else {
  //     return false;
  //   }
  // }
  // return true;
  int left = 0;
  int right = s.size()-1;
  while (left < right) {
    if (s[left] != s[right]) {
      return false;
    }
    left++;
    right--;
  }
  return true;
}

int main () {
  int n; cin >> n;
  vector<string> vec(n);
  for (int i = 0; i < n; i++) cin >> vec[i];
  
  for (int i = 1; i < n; i++) {
    string s = vec[0] + vec[i];
    if (pali(s)) {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
}