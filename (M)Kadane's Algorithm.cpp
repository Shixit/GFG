class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {
              int curr_max=0, maxi= INT_MIN;
        for(int i=0; i<n;i++){
      
            curr_max= curr_max+arr[i];
            maxi= max(maxi, curr_max);
            if(curr_max<0)
            curr_max=0;
        }
        return maxi;
    }
};
