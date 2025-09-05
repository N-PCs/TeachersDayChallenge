#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s;
    cin >> s;
    bool change = true;
    for (int i = 1; i < s.length(); i++) {
        if (islower(s[i])) {
            change = false;
            break;
        }
    }
    if (change) {
        for (int i = 0; i<s.length(); i++) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    cout << s << endl;
    return 0;
}