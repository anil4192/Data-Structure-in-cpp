#include<iostream>
#include<vector>
using namespace std;

//Basics of vector

int main()
{
    //create vector
    vector<int> arr;
    cout<<"Size of vector "<<arr.size()<<endl; //size of empty vector is 0.
    cout<<"Capacity of a vector "<<arr.capacity()<<endl; //How many elements it can store

    //Insert 
    arr.push_back(10);
    arr.push_back(20);

    // print 
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<int>v(10);
    cout<<"Size of v "<<v.size()<<endl;
    cout<<"capacity of v "<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //create a new vector
    int n;
    cout<<"Enter the value of n ";
    cin>>n;

    vector<int>v1(n,2); //We can initilize the value also
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    //we can also declare and initilize the vector

    vector<int>v2{10,20,30,40};
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    //check whether vector is empty or not
    cout<<"vector v2 is empty or not "<<v2.empty()<<endl;
    return 0;
}