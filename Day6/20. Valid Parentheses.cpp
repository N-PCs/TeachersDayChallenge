class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        static unordered_map<char,char> bracket={{')','('},{']','['},{'}','{'}};
        for(char c:s){
            if(bracket.find(c)==bracket.end()){
                stack.push(c);
            }
            else if(!stack.empty() && bracket[c]==stack.top()){
                stack.pop();
            }
            else{
                return false;
            }
        }
        return stack.empty();
    }
};
