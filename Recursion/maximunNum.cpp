#include<iostream>
#include<limits.h>
using namespace std;

//Find maximum number of a array using recursion

void findMax(int arr[],int n,int i,int& maxi)
{
    if(i>=n)
        return ;

    if(arr[i]>maxi)
    {
        maxi=arr[i];
    }

    findMax(arr,n,i+1,maxi);
}
int main()
{
    int arr[] = {10,40,60,90,20,50,60};
    int n= 7;
    int i = 0;
    int maxi = INT_MIN;
    findMax(arr,n,i,maxi);
    cout<<"Maximum Number is : "<<maxi<<endl;
    return 0;
}