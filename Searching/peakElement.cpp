#include<iostream>
#include<vector>
using namespace std;

// Peak Index in a mountain array

int findPeakIndex(vector<int>v)
{
    int s = 0;
    int e = v.size()-1;
    int mid = s + (e-s)/2;

    while(s<e)
    {
        if(v[mid]<v[mid+1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main()
{
    vector<int>arr{0,1,0};
    int index = findPeakIndex(arr);
    cout<<"Your Peak Index is : "<<index<<endl;
    return 0;
}