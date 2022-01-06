class Solution {
    public:
    vector twoSum(vector& nums, int target) {
        vector vec;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
                if(nums[i]+nums[j]==target)
                {
                    vec.push_back(i);
                    vec.push_back(j);
                    break;
                }
        }
        return vec;
    }
};
