Maximum sub Array

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int ans = INT_MIN;
    int sum = 0;

    for (const int num : nums) {
      sum = max(num, sum + num);
      ans = max(ans, sum);
    }

    return ans;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=0;
        int largest=0;
        for(int i=0;i<nums.size();i++){
            currSum= currSum+nums[i];
            if(currSum<0){
                currSum=0;
            }
            largest=max(currSum,largest);
        }
        return largest;
    }
};
