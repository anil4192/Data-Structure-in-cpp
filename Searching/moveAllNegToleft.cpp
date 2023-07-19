#include<iostream>
using namespace std;

//Move all negative to left

void moveAllNegToleft(int a[],int n)
{
    // Dutch national flag algo.
    int l = 0, h = n- 1;
    while(l<h)
    {
        if(a[l]<0)
        {
            l++;
        }
        else if(a[h]>0)
        {
            h--;
        }
        else
        {
            swap(a[l],a[h]);
        }
    }
}

int main()
{
    int arr[] = {1,2,-3,4,-5,6};
    int n= 6;
    moveAllNegToleft(arr,n);  
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } 
    return 0;
}