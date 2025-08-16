class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN,curSum=0;
        for(int i : nums){
            curSum+=i;
            maxSum=max(maxSum,curSum);
            if(curSum<0){
                curSum=0;
            }
        }
        return maxSum;
    }
};
