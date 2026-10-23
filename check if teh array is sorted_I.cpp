class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        bool sorted = true;
        for(int i=1 ; i<n ; i++)
        {
            if(arr[i-1] > arr[i])
            {
                sorted = false;
                break;
            }
        }
        return sorted;
    }
};
