string isPrime(int n) 
{
    if(n<=1)
    return "No";
    else
    {
        for (int i = 2; i < n; i++) 
        {
            if(n%i==0)
            {return "No";}
           // else {return "Yes";}
        }
    }
    return "Yes";
}
