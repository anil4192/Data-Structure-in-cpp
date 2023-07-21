#include<iostream>
#include<vector>
using namespace std;

// Selection sort

int main()
{
    vector<int> arr{5,4,3,2,1};
    int n = arr.size();
    int j;

    for(int round = 1;round<n;round++)
    {
        int val = arr[round];
        for(j=round-1;j>=0;j--)
        {
            if(arr[j]>val)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = val;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}