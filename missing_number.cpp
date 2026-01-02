class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> freq(n+1,0);//freq array to track eles
        //have n+1 elements 
        //from 0 to n ,and initializes each with 0

        //chalo dekhte hai array nums me kya kya hai
        for(int i=0 ; i<n ; i++)
        {
            freq[nums[i]] = 1;//the value which is present will be assigned 1
        }
        //now comes which remained 0
        for(int j=0 ; j<freq.size() ; j++)
        {
            if(freq[j]==0)
            {
                return j;//cout ni return!
            }
        }
        return 0;
    }
};
