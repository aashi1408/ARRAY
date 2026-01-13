class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        int n = nums1.size();
        int m = nums2.size();

        int freq[1001] = {0};//to track if an element has occurs or not
        //to maintain the uniqueness of the ans array 
        vector<int> ans;

        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<m ; j++)
            {
                if(nums1[i]==nums2[j] && freq[nums1[i]]==0)
                {
                    freq[nums1[i]] = 1;
                    ans.push_back(nums1[i]);//turant push back karo ele ko
                    break;//no need to further iterate
                }
            }
        }
        return ans;
    }
};
