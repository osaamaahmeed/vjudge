#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  bool flag = 0;
  deque <int> q;
  while (t--) {
    string s; cin >> s;
    if (s == "back") {
      if (q.empty()) {
        cout << "No job for Ada?\n";
      } else {
        if (!flag) {
        cout << q.back() << endl;
        q.pop_back();
      } else {
        cout << q.front() << endl;
        q.pop_front();
      }
      }
    } else if (s == "front") {
      if (q.empty()) {
        cout << "No job for Ada?\n";
      } else {
        if (!flag) {
        cout << q.front() << endl;
        q.pop_front();
      } else {
        cout << q.back() << endl;
        q.pop_back();
      }
      }
    } else if (s == "push_back") {
      int n; cin >> n;
      if (!flag) {
        q.push_back(n);
      } else {
        q.push_front(n);
      }
    } else if (s == "toFront") {
      int n; cin >> n;
      if (!flag) {
        q.push_front(n);
      } else {
        q.push_back(n);
      }
    } else if (s == "reverse") {
      if (flag == 0) flag = 1;
      else flag = 0;
    }
  }
}