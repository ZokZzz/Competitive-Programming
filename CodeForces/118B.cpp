#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    // Parte superior del patrón
    for (int i = 0; i < n; i++) {
        // Espacios iniciales
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
        // Secuencia ascendente
        for (int j = 0; j < i; j++) {
            cout << j << " ";
        }
        // Centro
        cout << i;
        // Secuencia descendente
        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }
        cout << "\n";
    }


    // Parte inferior del patrón
    for (int i = n; i >= 0; i--) {
        // Espacios iniciales
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
        // Secuencia ascendente
        for (int j = 0; j < i; j++) {
            cout << j << " ";
        }
        // Centro
        cout << i;
        // Secuencia descendente
        for (int j = 0; j < i; j++) {
            cout << " " << i - j - 1;
        }
        cout << "\n";
    }
    return 0;
}
