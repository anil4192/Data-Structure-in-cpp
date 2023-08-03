#include<iostream>
using namespace std;

//Reverse counting using Recursion

void counting(int n)
{
    //base case
    if(n==0)
        return ;
    
    cout<<n<<" ";

    //recursive relation
    counting(n-1);

}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    counting(n);
    cout<<endl;
    return 0;
}