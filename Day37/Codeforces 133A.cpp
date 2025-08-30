#include <iostream>
#include <string>
using namespace std;

int main() {
    string p;
    cin >> p;

    for (char c : p) {
        if (c == 'H' || c == 'Q' || c == '9') {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }
    
    std::cout << "NO" << std::endl;
    return 0;
}