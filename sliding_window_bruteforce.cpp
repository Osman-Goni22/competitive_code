// C++ program to implement Brute force technique.
#include <bits/stdc++.h>
using namespace std;
 
// Function to return the maximum sum in a subarray of size 'k'.
int maximumSum(vector<int> &arr, int n, int k)
{
    // If the total number of elements is less than 'k,’ it is invalid.
    if (n < k)
    {
        cout << "Invalid values entered.";
        return -1;
    }
 
    // Initializing the variables.
    int maxSum = INT_MIN;
    int curSum;
 
    // Calculating the sum of first 'k' elements in the array using a nested for loop.
    for (int i = 0; i <= n - k; i++)
    {
        curSum = 0;
        for (int j = i; j < i + k; j++)
        {
            curSum += arr[j];
        }
        maxSum = max(maxSum, curSum);
    }
    return maxSum;
}
int main()
{
    vector<int> arr;
    int n, i, a, k;
 
    // Taking user input.
    cout << "Enter the number of elements:\n";
    cin >> n;
    cout << "Enter the value of k\n";
    cin >> k;
    cout << "Enter the elements\n";
    for (i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
 
    // Calling the function.
    cout << "The maximum sum of a subarray of size " << k << " is " << maximumSum(arr, n, k);
    return 0;
}
