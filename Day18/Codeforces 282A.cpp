#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    unordered_map<string,int> operation={
        {"X++", 1},
        {"++X", 1},
        {"X--", -1},
        {"--X", -1}};
        
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        x+=operation[s];
    }
    cout<<x<<endl;
    return 0;
}