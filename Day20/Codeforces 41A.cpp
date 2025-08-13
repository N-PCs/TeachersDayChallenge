#include <iostream>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    string rev="";
    
    for(int i=t.length()-1;i>=0;--i){
        rev+=t[i];
    }
    
    if(rev==s){
        cout<<"YES";
    }else{
        cout<<"NO";

    }
    return 0;
}