#include <iostream>
#include<cstring>
using namespace std;

//Q replaceSpaces

void replaceSpaces(char sentence[])
{
    int n = strlen(sentence);
    for(int i=0;i<n-1;i++)
    {
        if(sentence[i] == ' ')
        {
            sentence[i] = '@';
        }
    }
}

int main()
{
    char sentence[100];
    cout<<"Enter your input string : ";
    cin.getline(sentence,50);
    replaceSpaces(sentence);
    cout<<"Output String id "<<sentence<<endl;

    return 0;
}
