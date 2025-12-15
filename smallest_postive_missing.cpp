#include<vector>

class Solution {
  public:
        int missingNumber(vector<int> &arr ) 
        {
            int n = arr.size();
        // code here
        vector<bool> present(n+1,false);//size n+1 
        //default value false
        
        for(int i=0 ; i<n ; i++)
        {
            if(arr[i]>0 && arr[i]<=n)
            {
                present[arr[i]] = true;
            }
        }
    
        for(int i=1 ; i<=n ; i++)
        {
            if(!present[i])
            {
                return i;
            }
        }
        return n+1;
        }
    
};
