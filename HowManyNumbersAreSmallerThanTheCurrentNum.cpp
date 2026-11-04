class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;

        for(int i=0 ; i<nums.size() ; i++)
        {
            int smaller = 0;
            for(int j=0 ; j<nums.size() ; j++)
            {
                if(nums[j] < nums[i]) smaller ++;
            }
            v.push_back(smaller);
        }
        return v;
    }
};
