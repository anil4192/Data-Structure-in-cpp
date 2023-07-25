#include <iostream>
#include<cstring>
using namespace std;

//Q Check Palindrome String

bool palindrome(char word[])
{
    int i =0;
    int n = strlen(word);
    int j = n-1;
    while(i<=j)
    {
        if(word[i] != word[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    char word[100];
    cout<<"Enter your string : ";
    cin>>word;
    palindrome(word);
    if(palindrome(word))
    {
        cout<<"Given string is palindrome"<<endl;
    }
    else
        cout<<"Not Palindrome"<<endl;

    return 0;
}
 