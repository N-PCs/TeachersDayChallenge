#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }
    
    sort(coins.begin(), coins.end(), greater<int>());
    
    int total_sum = 0;
    for (int coin : coins) {
        total_sum += coin;
    }
    
    int current_sum = 0;
    int count = 0;
    
    for (int coin : coins) {
        current_sum += coin;
        count++;
        if (current_sum > total_sum / 2) {
            break;
        }
    }
    
    cout << count << endl;
    
    return 0;
}