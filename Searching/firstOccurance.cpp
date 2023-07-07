#include<iostream>
#include<vector>
using namespace std;

//Q Find the first occurance of an element

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

int main()
{
    vector<int>arr{1,2,3,4,4,4,4,4,5,7,8};
    int target = 4;
    int firstOccuranceAtindex = firstOccurance(arr,target);
    cout<<"First occurance is : "<<firstOccuranceAtindex<<endl;

    return 0;
}

