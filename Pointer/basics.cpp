 #include<iostream>
 using namespace std;
 
//  int main()
//  {
//     int a = 5;
//     int b = 10;
//     cout<<a<<endl;
//     cout<<&a<<endl;
//     return 0; 
//  } 


int main()
{
    int a = 5;
    int * p = &a;
    int** q = &p;

    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
}