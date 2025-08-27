#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> gift;
    
    for (int i = 1; i <= n; i++) {
        int p;
        cin >> p;
        gift[p] = i;
    }
    
    for (int i = 1; i <= n; i++) {
        cout << gift[i] << " ";
    }
    
    return 0;
}