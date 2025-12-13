class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        int n = nums.size();
        int sml = INT_MAX;
        int larg = INT_MIN;

        for(int g=0 ; g<n ; g++)
        {
            if(nums[g]>larg)
            {
                larg = nums[g];
            }
            if(nums[g]<sml)
            {
                sml = nums[g];
            }
        }
        int gcd = 1;
        for(int i=sml ; i>1 ; i--)
        {
            if(sml%i==0 && larg%i==0)
            {
                gcd = i;
                break;
            }
        }
        return gcd;
    }
};
