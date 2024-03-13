// C++ program to implement Sliding Window Technique.
#include <bits/stdc++.h>
using namespace std;
 
// Function to return the maximum sum in a subarray of size 'k'.
int slidingWindow(vector<int> &arr, int n, int k)
{
    // If the total number of elements is less than 'k', it is invalid.
    if (n < k)
    {
        cout << "Invalid values entered.";
        return -1;
    }
 
    // Initializing the variables as 0.
    int maxSum = 0;
    int curSum = 0;
 
    // Calculating the sum of first 'k' elements in the array.
    for (int i = 0; i < k; i++)
    {
        curSum += arr[i];
    }
 
    // Initially, the maximum sum is equal to the curSum.
    maxSum = curSum;
 
    /*Computing the sum of remaining windows by
     adding the last element of the current window
     and removing the first element of the previous window.*/
    for (int i = k; i < n; i++)
    {
        curSum += arr[i] - arr[i - k];
        maxSum = max(maxSum, curSum);
    }
    return maxSum;
}
int main()
{
    vector<int> arr;
    int n, i, k, a;
 
    // Taking user input.
    cout << "Enter the number of elements:\n";
    cin >> n;
    cout << "Enter the value of k:\n";
    cin >> k;
    cout << "Enter the elements:\n";
    for (i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
 
    // Calling the function.
    cout << "The maximum sum of a subarray of size " << k << " is " << slidingWindow(arr, n, k);
    return 0;
}
