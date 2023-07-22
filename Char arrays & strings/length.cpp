#include <iostream>
#include<string>
#include<cstring>
using namespace std;

//Q Length of an string

int getLength(char arr[])
{
    int len = 0;
    int i=0;
    while(arr[i] != '\0')
    {
        len++;
        i++;
    }
    return len;
}

int main()
{
    char name[100];
    cout<<"Enter your string : ";
    //cin>>name;
    cin.getline(name,100); //If space in a string then use this syntax
    int length = getLength(name);
    cout<<"Length of your string is "<<length<<endl;
    cout<<"Length of your string is "<<strlen(name)<<endl;
    return 0;
}

