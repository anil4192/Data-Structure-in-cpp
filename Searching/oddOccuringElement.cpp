#include <iostream>
#include <vector>
using namespace std;

// Find odd occuring element in a array

int oddOccuring(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {

        if (s == e)
            return s;

        if (mid % 2 == 0)
        {
            if (v[mid] == v[mid + 1])
            {
                s = mid + 2;
            }
            else
            {
                e = mid;
            }
        }
        else
        {
            if (v[mid] == v[mid - 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main()
{
    vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};
    int ans = oddOccuring(arr);
    cout << "Odd Occuring Index is " << ans << endl;
    return 0;
}