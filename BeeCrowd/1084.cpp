#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, d;
  while (cin >> n >> d && n && d) {
    string number, res;
    cin >> number;
    stack<char> s;
    int toRemove = d;
    for (char c : number) {
      while (!s.empty() && toRemove > 0 && s.top() < c) {
        s.pop();
        toRemove--;
      }
      s.push(c);
    }
    while (toRemove > 0) {
      s.pop();
      toRemove--;
    }
    while (!s.empty()) {
      res = s.top() + res;
      s.pop();
    }
    cout << res << "\n";
  }
  return 0;
}
