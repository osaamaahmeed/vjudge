#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n; cin >> n;
  vector<int> hight;
  for (int i = 0; i < n; i++) {int x; cin >> x; hight.push_back(n);}
  int maxNum = *max_element(hight.begin(), hight.end());
  int counter = 0;
  int minNum = 9999999;
  for (int i = 0; i < n; i++) {
    if (hight[i] == maxNum) {
      int j = i;
      while (hight[j] != maxNum-1) {
        if (hight[j] < minNum) minNum = hight[j];
        counter++;
      }
      break;
    }
  }
  cout << counter*minNum;
}