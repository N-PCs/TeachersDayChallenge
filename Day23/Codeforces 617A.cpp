#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int steps=n/5;
    if(n%5!=0){
        steps+=1;
    }
    
    cout << steps << endl;
    return 0;
}