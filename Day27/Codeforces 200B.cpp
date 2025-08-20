#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        total += p;
    }
    double result = (double)total / n;
    cout << fixed << setprecision(12) << result << endl;
    return 0;
}