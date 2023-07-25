#include <iostream>
#include<cstring>
using namespace std;

//Q compare 2 strings

bool compareString(string a,string b)
{
    if(a.length() != b.length())
        return false;
    else
    {
        int j = 0;
        for(int i=0;i<a.length();i++)
        {
            if(a[i] != b[j])
                return false;
            else
                j++;
        }
    }
    return true;
}

int main()
{
    string a = "anil";
    string b = "ani";
    compareString(a,b);
    if(compareString(a,b))
    {
        cout<<"Strings are Same"<<endl;
    }
    else
    {
        cout<<"Strings are not same"<<endl;
    }

    return 0;
}
