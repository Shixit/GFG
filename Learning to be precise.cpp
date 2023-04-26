//User function Template for C++
#include<iostream>
using namespace std;
void precise(float a, float b)
{
   float c= a/b;
    
    cout<<c<<" "<<setprecision(3)<<fixed<<c<<endl;
    
    cout<<endl;
}
