class Solution{
public:
    void reverse(int arr[], int n){
        int j = n-1;
        for(int i=0 ; i<=n/2 ; i++)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j--;
        }
        // return arr;
    }
};
