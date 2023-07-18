#include<iostream>
#include<vector>
using namespace std;

//Unique element in an array

int findUnique(vector<int>&v)
{
    int ans = 0;
    for(int i=0;i<v.size();i++)
    {
        ans = ans ^ v[i];
    }
    return ans ;
}

int main()
{
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    vector<int>arr(n);
    //taking input
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ans = findUnique(arr);
    cout<<"Unique Element is "<<ans<<endl;

    return 0;
}