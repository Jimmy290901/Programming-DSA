#include <iostream>
using namespace std;

// To find the maximum sum of a subarray calculated from the given array (Asked in Amazon)

// Solution with best approach as the time complexity is only O(n)

int main()
{
    int arr[] = {1, 2, 3, -2, 5};
    int n = sizeof(arr) / sizeof(int);

    int cs = 0, ms = 0; // cs=current sum    ms=maxm sum

    for (int i = 1; i < n; i++)
    {
        cs += arr[i];
        if (cs < 0)
        {
            cs = 0;
        }

        ms = max(cs, ms);
    }
    cout << ms << endl;
    return 0;
}

// link of problem  "https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1"