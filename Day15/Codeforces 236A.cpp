#include <iostream>
#include <set>
using namespace std;
int main(){
    
    set<char> distinct;
    
    string name;
    cin>>name;
    
    for(char i:name){
        distinct.insert(i);
    }
    
    if(distinct.size()%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    
    return 0;
}
