#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i == 1 || i == n) { // For the first and last rows
            for(int j = 0; j < n; j++) {
                cout << "*";
            }
        } else { // For the middle rows
            cout << "*"; // Leading star
            for(int j = 1; j < n - 1; j++) {
                cout << " "; // Spaces in between
            }
            cout << "*"; // Trailing star
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
