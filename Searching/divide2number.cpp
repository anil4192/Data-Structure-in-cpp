#include <iostream>

using namespace std;

//Q divide 2 number using binary search
// quotient * divisor + reminder = dividend 

int solve(int dividend,int divisor)
{
    int s = 0;
    int e = abs(dividend);
    int ans = 0;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(abs(mid*divisor) == dividend)
            return mid;
        if(abs(mid*divisor) > dividend)
            e = mid - 1;
        else
        {
            ans = mid ;
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    if(divisor>0 && dividend>0 || divisor<0 && dividend<0)
        return ans;
    else
        return -ans;
}


int main()
{
    int dividend = 36;
    int divisor = 6;
    int ans = solve(dividend,divisor);
    cout<<"Ans is "<<ans<<endl;

    return 0;
}
