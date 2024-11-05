#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        // Print leading spaces
        for(int j = 0; j < n - i - 1; j++) cout << " ";
        
        // Print increasing letters from 'A' up to the midpoint
        for(int k = 0; k <= i; k++) {
            cout << char('A' + k);
        }
        
        // Print decreasing letters after the midpoint
        for(int k = i - 1; k >= 0; k--) {
            cout << char('A' + k);
        }
        
        // Print trailing spaces (optional, for symmetry)
        for(int j = 0; j < n - i - 1; j++) cout << " ";
        
        cout << endl;
    }
    
    return 0;
}
