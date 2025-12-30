class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int index = nums.size();//as in the case that all elements in the array are smaller than the target
        int start = 0 , end = nums.size() - 1 , mid;

        while(start<=end)
        {
            mid = (start+end)/2;
            if(nums[mid]==target)
            {
                // index = mid;
                return mid;
            }
            else if(nums[mid]<target)
            {
                start = mid + 1;
            }
            else if(nums[mid]>target)//it could be the potential ans
            {
                index = mid;
                end = mid - 1;
            }
        }
        return index;
    }
};
