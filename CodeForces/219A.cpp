#include <bits/stdc++.h>

using namespace std;

const int ALPHABET_SIZE = 26;

int toInt(char c) {
    return c - 'a';
}

char toChar(int x) {
    return x + 'a';
}

bool isPossible(vector<int> freq, int k) {
    for (int x : freq) {
        if (x % k != 0) {
            return false;
        }
    }
    return true;
}

void showAnswer(vector<int> freq, int k) {
    string s;
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        for (int j = 0; j < freq[i] / k; j++) {
            s.push_back(toChar(i));
        }
    }
    for (int i = 0; i < k; i++) {
        cout << s;
    }
    cout << endl;
}

int main() {
    int k; cin >> k;
    string s; cin >> s;
    vector<int> freq(ALPHABET_SIZE);
    for (char c : s) {
        freq[toInt(c)]++;
    }
    if (!isPossible(freq, k)) {
        cout << -1 << endl;
    } else {
        showAnswer(freq, k);
    }
    return 0;
}
