#include<iostream>
#include<vector>
using namespace std;

//Pair sum
//Print the all pairs 

int main()
{
    vector<int>arr{10,20,40,60,70};
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
    return 0;
}