// User function Template for C++

// Function to perform bitwise manipulations
// a, b and c are input integers
void bitWiseOperation(int a, int b, int c) {
   int d,e,f,g;
   d = a ^ a;
   e = c ^ b;
   f = a & b;
   g = c | (a ^ a);
   cout<<d<<endl<<e<<endl<<f<<endl<<g<<endl;
   e = ~e;
   cout<<e<<endl;
}
