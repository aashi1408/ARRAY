class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) 
    {
        int neg_count = 0;

        for(int i=grid.size()-1 ; i>=0 ; i--)//hm shuru se bhi start krskte the
        {
            for(int j=grid[i].size()-1 ; j>=0 ; j--)
            {
                if(grid[i][j]<0)//negative found
                {
                    neg_count++;
                }
                if(grid[i][j]>=0)
                {
                    break;
                }
            }
        }
        return neg_count;
    }
};
