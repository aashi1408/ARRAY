class Solution {
public:
    vector<int> rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();
        vector<int> v;
        k = k % n;//necessary if k larger than n//

        /* if k=3 and it's a 0 based indexing means we have to rotate last 3 elements
        to the start for this index of first of the 3 is n-3 (as last is n-1)
        and index of 2nd is n-2 and indexing of 3rd which is the last element to be
        rotated is n-1*/

        for(int i=n-k ; i<=n-1 ; i++)
        {
            v.push_back(nums[i]);
        }
        for(int j=0 ; j<=n-k-1 ; j++)//as we know last k elements are already pushed to v
        //now remaining elements starts from 0 only but end will be k-1
        {
            v.push_back(nums[j]);
        }
        nums = v;//
        return v;
    }
};
