// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl "\n"

// queue<int> removeBack (queue <int> q, int n) {
//   queue <int> res;
//   for (int i = 0; i < n-1; i++) {
//     res.push(q.front());
//     q.pop();
//   }
//   return res;
// }

// queue<int> reverseQ (queue <int> q, int n) {
//   queue <int> res;
//   int arr[n];
//   for (int i = n-1; i >= 0; i--) {
//     arr[i] = q.front();
//     q.pop();
//   }
//   for (int i = 0; i < n; i++) {res.push(arr[i]);}
//   return res;
// }

// queue<int> addFront (queue<int>q, int x, int n) {
//   queue<int>res;
//   res.push(x);
//   for (int i = 0; i < n; i++) {
//     res.push(q.front());
//     q.pop();
//   }
//   return res;
// }

// int main () {
//   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//   int t; cin >> t;
//   queue<int>q;
//   while (t--) {
//     string s; cin >> s;
//     int x;
//     if (s=="back") {
//       if (!q.empty()) {
//         cout << q.back() << endl;
//         q = removeBack(q, q.size());
//         } else cout << "No job for Ada?\n";
//     } else if (s=="front") {
//       if (!q.empty()) {
//         cout << q.front() << endl;
//         q.pop();
//       } else cout << "No job for Ada?\n";
//     } else if (s=="reverse") {
//       q = reverseQ(q, q.size());
//     } else if (s=="push_back") {
//       cin >> x;
//       q.push(x);
//     } else if (s=="toFront") {
//       cin >> x;
//       q = addFront(q,x,q.size());
//     }
//   }
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  deque<int>d;
  bool rev = 0;
  while (t--) {
    string s; cin >> s;
    int x;
    if (s=="back") {
      if (!d.empty()) {
        if (rev == 0) {
          cout << d.back() << endl;
          d.pop_back();
        } else {
          cout << d.front() << endl;
          d.pop_front();
        }
      } else cout << "No job for Ada?\n";
    } else if (s=="front") {
      if (!d.empty()) {
        if (rev == 0) {
          cout << d.front() << endl;
          d.pop_front();
        } else {
          cout << d.back() << endl;
          d.pop_back();
        }
      } else cout << "No job for Ada?\n";
    } else if (s=="reverse") {
      rev = !rev;
    } else if (s=="push_back") {
      cin >> x;
      if (rev == 0) d.push_back(x);
      else d.push_front(x);
    } else {
      cin >> x;
      if (rev == 0) d.push_front(x);
      else d.push_back(x);
    }
  }
}