#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int max = 0, min = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > a[max]) {
            max = i;
        }
        if (a[i] <= a[min]) {
            min = i;
        }
    }
    
    int step = max + (n - 1 - min);
    if (max > min) {
        step--;
    }
    
    cout << step << endl;
    return 0;
}