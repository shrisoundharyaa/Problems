#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << char('E' - i + j);  // Adjust starting character based on the row
        }
        cout << endl;
    }
    
    return 0;
}
