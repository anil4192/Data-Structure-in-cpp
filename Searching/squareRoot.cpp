#include<iostream>
using namespace std;

//Square root of Number using Binary Search

int findRoot(int n)
{
    int target = n;
    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e)
    {
        if(mid*mid == target)
        {
            return mid;
        }
        if(mid*mid >target)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int n ;
    cout<<"Enter a Number for finding square root : ";
    cin>>n;
    int ans = findRoot(n);
    cout<<"Square root of "<<n<<" is : "<<ans<<endl;

    int precision;
    cout<<"Enter the floating digits in precesion : ";
    cin>>precision;
    double step = 0.1;
    double finalAns = ans;
    for(int i=0;i<precision;i++)
    {
        for(double j=finalAns;j*j<n;j+=step)
        {
            finalAns = j;
        }
        step = step/10;
    }
    cout<<"Final Ans is : "<<finalAns<<endl;
    
    return 0;
}