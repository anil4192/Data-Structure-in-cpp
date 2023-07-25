#include<iostream>
#include<cstring>
using namespace std;

// Convert string into lower case

void convertIntoLowercase(char arr[])
{
    int n = strlen(arr);
    for(int i=0;i<n;i++)
    {
        arr[i] = arr[i] - 'A' + 'a';
    }
}

int main()
{
    char ch[100];
    cout<<"Enter your string : ";
    cin>>ch;
    convertIntoLowercase(ch);
    cout<<"Lower case string is "<<ch<<endl;
    
    return 0;
}