#include <iostream>
#include<cstring>
using namespace std;

//Q Convert into uppercase

void convertIntoUpperCase(char arr[])
{
   int n = strlen(arr);
   for(int i=0;i<n;i++)
   {
       arr[i] = arr[i] - 'a' + 'A';
   }
}

int main()
{
    char arr[20];
    cout<<"enter your string : ";
    cin>>arr;
    convertIntoUpperCase(arr);
    cout<<"String after convert : "<<arr<<endl;
    return 0;
}
