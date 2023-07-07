#include <iostream>
#include<vector>
using namespace std;

//Q Total occurance of an element

int firstOccurance(vector<int>v, int target)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(v[mid] == target)
        {
            ans = mid;
            e = mid -1;
        }
        else if(target > v[mid])
        {
            s = mid + 1;
        }
        else if(target < v[mid])
        {
            e = mid - 1 ;
        }
        else 
            return -1;
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int> v,int target)
{
    int s = 0;
    int e = v.size()-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(v[mid] == target)
        {
            ans = mid;
            s = mid + 1;
        }
        else if(target > v[mid])
        {
            s = mid + 1;
        }
        else 
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    vector<int>arr{1,2,3,4,7,7,7,7,7,8,9};
    int target = 7;
    int ans1 = firstOccurance(arr,target);
    cout<<"First Occurance at "<<ans1<<endl;
    int ans = lastOcc(arr,target);
    cout<<"Last Occurance of "<<target<<" is at "<<ans<<endl;
    int totalOcc = ans - ans1 + 1;
    cout<<"Total Occurance of "<<target<<" is "<<totalOcc<<endl;

    return 0;
}

