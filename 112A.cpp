#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    // Convert both strings to lowercase
    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] += 32;
        }
    }

    for (int i = 0; i < b.size(); i++) {
        if (b[i] >= 'A' && b[i] <= 'Z') {
            b[i] += 32;
        }
    }

    // Compare strings lexicographically
    if (a == b) {
        cout << 0 << endl;
    } else if (a < b) {
        cout << -1 << endl;
    } else {
        cout << 1 << endl;
    }

    return 0;
}
