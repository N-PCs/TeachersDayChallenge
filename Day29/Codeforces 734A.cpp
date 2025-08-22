#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    
    unordered_map<char, int> count;
    for (char c : s) count[c]++;
    
    if (count['A'] > count['D'])
        cout << "Anton";
    else if (count['D'] > count['A'])
        cout << "Danik";
    else
        cout << "Friendship";
    
    return 0;
}