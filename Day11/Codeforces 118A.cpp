#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    unordered_set <char> vowel={'A', 'O', 'Y', 'E', 'U', 'I', 'a', 'o', 'y', 'e', 'u', 'i'};
    string s;
    cin>>s;
    string result;
    for(char c:s){
        if(vowel.find(c)==vowel.end()){
            result+='.';
            result+=tolower(c);
        }
    }
    cout<<result<<endl;
    return 0;
}