#include <iostream>

using namespace std;
 
int main() {
    int n, t;
    string s;
    cin >> n >> t >> s;
    
    for (int time = 0; time < t; ++time) {
        string next = s;
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == 'B' && s[i+1] == 'G') {
                next[i] = 'G';
                next[i+1] = 'B';
            }
        }
     
        s = next;
    }
    cout << s << endl;
    return 0;
}
