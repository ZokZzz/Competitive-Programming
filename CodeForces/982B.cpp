#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    priority_queue<ii, vector<ii>, greater<ii>> pq_min;
    priority_queue<ii> pq_max;
    for (int i = 0; i < n; i++) {
        pq_min.push(ii(a[i], i));
    }
    string s; cin >> s;
    for (char c : s) {
        if (c == '0') {
            ii curr = pq_min.top();
             pq_min.pop();
            cout << curr.second + 1 << " ";
            pq_max.push(ii(curr.first, curr.second));
        } else {
            ii curr = pq_max.top();
            pq_max.pop();
            cout << curr.second + 1 << " ";
        }
    }
    return 0;
}
