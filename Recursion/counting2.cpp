#include<iostream>
using namespace std;

void forwardCounting(int n)
{
    //Base case
    if(n==0)
        return;

    //Recursive relation
    forwardCounting(n-1);

    cout<<n<<" ";
}
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    forwardCounting(n);
    cout<<endl;
    return 0;
}