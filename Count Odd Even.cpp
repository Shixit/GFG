//User function Template for C++

class Solution{
    public:
    int CE=0,CO=0;
    void countOddEven(int arr[], int sizeof_array)
    {
     for(int i=0;i<sizeof_array;i++)
     {
        if(arr[i]%2==0)
        { 
            CE++;
        }
        else CO++;
    }
    cout<<CO<<" "<<CE<<endl;
};
};
