#include<iostream>
using namespace std;

int powerOf2(int n)
{
    if(n==0)
        return 1;

    int ans = 2 * powerOf2(n-1);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter any Number : ";
    cin>>n;
    int ans = powerOf2(n);
    cout<<"Ans is : "<<ans<<endl;
    return 0;
}