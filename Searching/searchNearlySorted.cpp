#include<iostream>
#include<vector>
using namespace std;

//Search in nearly sorted Array

int binarySearch(vector<int>v,int key)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e-s)/2;
    while(s<e)
    {
        if(v[mid-1] == key)
        {
            return mid-1;
        }
        if(v[mid] == key)
        {
            return mid;
        }
        if(v[mid+1] == key)
        {
            return mid+1;
        }
        if(v[mid]>key)
        {
            e = mid - 2;
        }
        if(v[mid]<key)
        {
            s = mid + 2;
        }
        else
            return -1;

        mid = s + (e-s)/2;

        //return -1;
    }
}

int main()
{
    vector<int>arr{10,3,40,20,50,80,70};
    int target = 40;
    int ans = binarySearch(arr,target);
    cout<<"Index of "<<target<<" is "<<ans<<endl;
    return 0;
}