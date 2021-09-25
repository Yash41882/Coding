#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main()
{
    float x, n, s=0;
    cout<<"\n S = X/2! + X/4! + X/6! + ... + X/2n!";
    cout<<"\nEnter tha value of X = ";
    cin>>x;
    cout<<"\nEnter tha value of n = ";
    cin>>n;

    n=2*n;

    while(n!=0)
    {
        s = s + x/factorial(n);
        n= n-2;
    }

    cout<<"\nValue of S = "<<s;
    
    return 0;
}
