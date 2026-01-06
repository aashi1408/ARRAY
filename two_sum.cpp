class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        vector<int> v;
        for(int j=0 ; j<=n-2 ; j++)
        {
            for(int i=j+1 ; i<=n-1 ; i++)
            {
                if(nums[j] + nums[i] == target)
                {
                    v.push_back(j);
                    v.push_back(i);
                    break;
                }
            }
        }
        return v;
    }
}; 
