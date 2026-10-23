class Solution{
public:
    int countOdd(int arr[], int n){
        int odd_count = 0;
        for(int i=0 ; i<n ; i++)
        {
            if(arr[i] % 2 != 0) odd_count++;
        }
        return odd_count;
          
    }
};
