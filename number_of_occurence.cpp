// Function to count the number of occurrences of target in an array
int countFreq(int arr[], int n, int target) {
    // code here..
    int count = 0;
    
    for(int h=0 ; h<n ; h++)
    {
        if(arr[h]==target)
        {
            count++;
        }
        // else continue;
    }
    return count;
}
