//User function Template for C++

/*Function to swap array elements
* arr : array input
* sizeof_array : number of elements in array
*/
class Solution{
  public:
    void swapElements(int arr[], int sizeof_array)
    {
        for(int i=0;i<sizeof_array;i++)
        {
            int temp;
            if(i+2<sizeof_array)
            {
            temp=arr[i+2];
            arr[i+2]=arr[i];
            arr[i]=temp;
            }
        }
    }
};
