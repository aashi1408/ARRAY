class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int> ans(nums.size());//ans array me kaam karenge

        int i = 1;
        int j = n;
        ans[0] = nums[0];
    
        for(int k=1 ; k<nums.size() ; k++)//first dry run to karo
//upsolve to karo
        {
            if(k%2!=0)
            {
                ans[k] = nums[j];
                j++;
            }
            else
            {
                ans[k] = nums[i];
                i++;
            }

        }
        return ans;
    }
};
