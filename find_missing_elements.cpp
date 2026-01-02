class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) 
    {
        int sml = INT_MAX;
        int larg = INT_MIN;
        //to find sml and larg of the array
        for(int k=0 ; k<nums.size() ; k++)
        {
            if(nums[k]>larg) larg = nums[k];
            if(nums[k]<sml) sml = nums[k];
        }   
        //this freq method is only applicable for positive numbers

        vector<int> freq(larg+1,0);//freq for tracking elements
        //but from sml to larg ok!
        for(int i=0 ; i<nums.size() ; i++)
        {
            freq[nums[i]] = 1;
        }
        //ans vector
        vector<int> ans;
        for(int j=sml ; j<larg+1 ; j++)
        {
            if(freq[j]==0)//means that element is missing
                ans.push_back(j);
        }
        return ans;
    }
};
