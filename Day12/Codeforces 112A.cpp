#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    
    for(int i=0;i<s1.size();++i){
        s1[i]=tolower(s1[i]);
    }
    for(int j=0;j<s2.size();++j){
        s2[j]=tolower(s2[j]);
    }
        
    if(s1>s2){
        cout<< 1<<endl;
    }
    else if(s2>s1){
        cout<< -1<<endl;
    }
    else{
        cout<< 0<<endl;
    }
    
    return 0;
}
