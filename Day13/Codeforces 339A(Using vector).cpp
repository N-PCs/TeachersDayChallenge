#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
int main() {
    string s;
    cin >> s;
    vector<int> num;
    for (char c:s){
        if (c!='+') {
            num.push_back(c-'0');
        }
    }
    sort(num.begin(),num.end());
    for (int i=0;i<num.size();++i) {
        if (i!= 0) {
            cout<<"+";
        }
        cout<<num[i];
    }
    cout<<endl;
    return 0;
}
