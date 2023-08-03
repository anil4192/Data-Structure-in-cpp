#include<iostream>
using namespace std;

int fibonacci(int n)
{
    //base case 
    if(n==0 || n==1)
        return n;

    int ans = fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n;
    cout<<"Enter the term U want : ";
    cin>>n;
    int ans = fibonacci(n);
    cout<<n<<"th term of series "<<ans<<endl;
    return 0;
}