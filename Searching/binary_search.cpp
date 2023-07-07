#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int target)
{
    int start = 0, end = size-1;
    int mid = (start+end)/2;
    
    while(start<=end)
    {
        if(arr[mid] == target)
        {
            return mid;
        }
        else if(target>arr[mid])
        {
            start = mid + 1;
        }
        else 
            end = mid - 1;
            
        mid = (start+end)/2;
    }
    return -1;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int n = 5;
    int key = 50;
    if(binarySearch(arr,n,key) == -1)
        cout<<"Not Found"<<endl;
    else
        cout<<"Target Found At "<<binarySearch(arr,n,key)<<endl;

    return 0;
}


