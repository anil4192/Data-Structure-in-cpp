#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    // string str ;
    // //cin>>str;
    // cout<<"Enter Your String : ";
    // getline(cin,str);
    // cout<<str<<endl;
    // cout<<"Length: "<<str.length()<<endl;
    // cout<<"Empty: "<<str.empty()<<endl; 
    // str.push_back('A');
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str<<endl;
    // //Sub String
    // cout<<str.substr(0,4)<<endl;
    
    //Compare function
    
    string a = "Anil";
    string b = "Anil";
    if(a.compare(b) == 0)
        cout<<"a and  b are same string"<<endl;
    else
        cout<<"a and b not same"<<endl;

    return 0;
}

