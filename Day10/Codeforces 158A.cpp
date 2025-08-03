#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int points[n];
    int count=0;
    
    for(int i=0;i<n;i++){
        cin>>points[i];
    }
    
    int val=points[k-1];
    
    for(int i=0;i<n;i++){
        if(points[i]>=val && points[i]>0){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}