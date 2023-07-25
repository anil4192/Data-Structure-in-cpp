#include<iostream>
using namespace std;

//Reverse String

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


void reverseString(char ch[])
{
    int s = 0;
    int n= getLength(ch);
    int e = n-1;

    while(s<=e)
    {
        swap(ch[s],ch[e]);
        s++;
        e--;
    }

}

int main()
{
    char name[100];
    cout<<"Enter Your String : ";
    cin.getline(name,50);
    reverseString(name);
    cout<<"Reverse String "<<name<<endl;
    
    return 0;
}