#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n, count;
    cin >> n;
    
    count = 1; 
    
    vector<int> magnet(n);
    for (int i = 0; i < n; i++) {
        cin >> magnet[i];
    }
 
    for (int i = 1; i < n; i++) {
        if (magnet[i] != magnet[i-1]) {
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}