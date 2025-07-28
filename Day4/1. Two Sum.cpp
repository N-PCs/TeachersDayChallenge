class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index(2);          
        unordered_map<int,int> visitNum;
        for(int i=0;i<nums.size();++i){
            int current=nums[i];
            int findNum=target-current;

            if(visitNum.count(findNum)){
                index[0]=visitNum[findNum];
                index[1]=i;
                return index;
            }
            visitNum[current]=i;
        }
        return index;
        
    }
};