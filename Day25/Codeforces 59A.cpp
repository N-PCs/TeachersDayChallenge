#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
    string s;
    cin>>s;
    int lcount=0;
    int ucount=0;
    
    for(char i:s){
        if(isupper(i)){
            ucount++;
        }
        else{
            lcount++;
        }
    }
    
    if(ucount>lcount){
        for(char &i:s){
            i=toupper(i);
        }
    }
    else{
        for(char &i:s){
            i=tolower(i);
        }
    }
    cout<<s<<endl;
    return 0;
}