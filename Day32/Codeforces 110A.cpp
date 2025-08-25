#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    int count = 0;
    for (char c : n) {
        if (c == '4' || c == '7') {
            count++;
        }
    }
    
    string s = to_string(count);
    
    for (char c : s) {
        if (c != '4' && c != '7') {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    cout << "YES" << endl;
    return 0;
}