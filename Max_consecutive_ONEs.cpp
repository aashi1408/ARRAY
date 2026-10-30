class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx_len = 0 , len = 0;

        for(int i=0 ; i<nums.size() ; i++)
        {
            if(nums[i] == 1)
            {
                len ++;
                mx_len = max(mx_len , len);
            }
            else len = 0;//reinitialize len for further calculation
        }
        return mx_len;
    }
};
