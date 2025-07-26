class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> soln;
        for(int i=1;i<=n;++i){
            if(i%15==0){
                soln.push_back("FizzBuzz");
            }
            else if(i%3==0){
                soln.push_back("Fizz");
            }
            else if(i%5==0){
                soln.push_back("Buzz");
            }
            else{
                soln.push_back(to_string(i));
            }        
        }
        return soln;
    }
};