

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum = INT_MAX;
        vector<int> res(2);
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                 sum = nums[i] + nums[j];
        if(sum==target){
            res[0]=i;
            res[1]=j;
            return res;
                }
            }
        }
        return res;
    }
};
