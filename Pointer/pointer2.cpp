#include <iostream>
using namespace std;

// Q 1
// int main()
// {
//     float f = 10.5;
//     float p = 2.5;
//     float *ptr = &f;
//     (*ptr)++;
//     *ptr = p;
//     cout << *ptr << " " << f << " " << p;
//     return 0;
// }

// Q 2
//  int main()
//  {
//      int a =7;
//      int b = 17;
//      int *c = &b;
//      *c = 7;
//      cout<<a<<" "<<b<<endl;
//  }

// Q 3  // Runtime error
//  int main()
//  {
//      int *ptr = 0;
//      int a = 10;
//      *ptr = a;
//      cout<<*ptr<<endl;
//  }

// Q 4
//  int main()
//  {
//      char ch = 'a';
//      char* ptr = &ch;
//      ch++;
//      cout<<*ptr<<endl;
//  }

// Q 5
//  int main()
//  {
//      int a = 7;
//      int *c = &a;
//      c = c+1;
//      cout<<a<<" "<<*c<<endl;
//  }

// Q 6
//  int main()
//  {
//      int a = 7;
//      int *c = &a;
//      c = c + 3;
//      cout<<c<<endl;
//  }

// Q 7
//  int main()
//  {
//      double a = 10.54;
//      double *d = &a;
//      d = d + 1;
//      cout<<d<<endl;
//  }

// Q 8
//  int main()
//  {
//      int a[5];
//      int *c;
//      cout<<sizeof(a)<<" "<<sizeof(c);
//  }

// Q 9
//  int main()
//  {
//      int a[] = {1,2,3,4};
//      cout<<*(a)<<" "<<*(a+1);
//  }

// Q 10
//  int main()
//  {
//      int a[3] = {1,2,3};
//      cout<<*(a+2);
//  }

// Q 11 //runtime error
//  int main()
//  {
//      int a[] = {1,2,3,4};
//      int *p  = a++;
//      cout<<*p<<endl;
//  }

// Q 12
//  int main()
//  {
//      int arr[] = {4,5,6,7};
//      int *p = (arr+1);
//      cout<< *arr +9;
//      return 0;
//  }

// Q 13
//  int main()
//  {
//      char b[] = "xyz";
//      char *c = &b[0];
//      cout<<c<<endl;  //xyz
//  }

// Q 14
//  int main()
//  {
//      char s[] = "hello";
//      char *p = s;
//      cout<<s[0]<<" "<<p[0]; //h //h
//  }

// Q 15
//  int main()
//  {
//      char arr[20];
//      int i;
//      for(i=0;i<10;i++)
//      {
//          *(arr+i) = 65 + i;
//      }

//     *(arr+i)='\0';
//     cout<<arr;
//     return 0;
// }

// Q 16
//  int main()
//  {
//      char *ptr ;
//      char str[] = "abcdefg";
//      ptr = str;
//      ptr+= 5;
//      cout<<ptr;
//      return 0;
//  }

// Q 17
//  int main()
//  {
//      int numbers[5];
//      int *p;
//      p = numbers;
//      *p = 10;
//      p = &numbers[2];
//      *p = 20;
//      p--;
//      *p = 30;
//      p = numbers + 3;
//      *p = 40;
//      p = numbers;
//      *(p+4) = 50;
//      for(int n=0;n<5;n++)
//      {
//          cout<<numbers[n]<<" "; //10 30 20 40 50
//      }
//      return 0;
//  }

// Q 18
// int main()
// {
//     char st[] = "ABCD";
//     for (int i = 0; st[i] != '\0'; i++)
//     {
//         cout << st[i] << *(st) + i << *(i + st) << i[st]<<endl;
//         // A65AA
//         // B66BB
//         // C67CC
//         // D68DD
//     }
// }

// Q 19
//  int main()
//  {
//      float arr[5] = {12.5,10.0,13.5,90.5,0.5};
//      float *ptr1 = &arr[0];
//      float *ptr2 = ptr1 + 3;
//      cout<<*ptr2<<" ";
//      cout<<ptr2-ptr1;
//      return 0;
//  }

// Q 20
//  void changeSign(int *p)
//  {
//      *p = (*p) * -1;
//  }

// int main()
// {
//     int a = 10;
//     changeSign(&a);
//     cout<<a<<endl;
// }

// Q 21
//  void fun(int a[])
//  {
//      cout<<a[0] <<" ";
//  }

// int main()
// {
//     int a[] = {1,2,3,4};
//     fun(a+1);
//     cout<<a[0];
// }

// Q 22
// void square(int *p)
// {
//     int a = 10;
//     p = &a;
//     *p = (*p) * (*p);
// }

// int main()
// {
//     int a = 10;
//     square(&a);
//     cout << a << endl;
// }

// Q 23
//  void Q(int z)
//  {
//      z = z+z;
//      cout<<z<<endl; // 14
//  }
//  void P(int *y)
//  {
//      int x = *y +2;
//      Q(x);
//      *y = x-1;
//      cout<<x<<endl; // 7
//  }
//  int main()
//  {
//      int x = 5;
//      P(&x);
//      cout<<x<<endl; // 6
//      return 0;

// }

// Q 24
// int main()
// {
//     int a = 10;
//     int *p = &a;
//     int **q = &p;
//     int b = 20;
//     *q = &b;
//     (*p)++;
//     cout << a << " " << b << endl;
// }

// Q 25
//  int f(int x,int *py,int **ppz)
//  {
//      int y,z;
//      **ppz += 1;
//      z = **ppz;
//      *py += 2;
//      y = *py;
//      x += 3;
//      return x + y + z;
//  }

// int main()
// {
//     int c,*b, **a;
//     c = 4;
//     b = &c;
//     a = &b;
//     cout<<f(c,b,a);
//     return 0;
// }

// Q 26
// int main()
// {
//     int ***r, **q, *p, i = 8;
//     p = &i;
//     (*p)++;
//     q = &p;
//     (**q)++;
//     r == &q;
//     cout << *p << " " << **q << " " << ***r;
//     return 0;
// }


//Q 27
// void inc(int **p)
// {
//     (**p)++;
// }

// int main()
// {
//     int num = 10;
//     int *ptr = &num;
//     inc(&ptr);
//     cout<<num<<endl;
// }