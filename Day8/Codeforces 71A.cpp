#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string longWord;
        cin>>longWord;
        int len=longWord.length();
        if(longWord.length()>10){
            cout<<longWord[0]<<len-2<<longWord[len-1]<<endl;;
        }
        else{
            cout<<longWord<<endl;
        }
    }
    return 0;
}