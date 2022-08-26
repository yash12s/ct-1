// Yash Arora 
// 2010992493
// Group - 20
// Set - 04
// Question no -1


#include <iostream>
#include <unordered_set>
using namespace std;

// Function to find the minimum index of the repeating element
int findMinIndex(int arr[], int n)
{
    int minIndex = n;

    
    unordered_set<int> set;

    // traverse the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // if the element is seen before, update the minimum index
        if (set.find(arr[i]) != set.end())
        {
            minIndex = i;
        }
        
        else
        {
            set.insert(arr[i]);
        }
    }

    // invalid input
    if (minIndex == n)
    {
        return -1;
    }

    // return minimum index
    return minIndex;
}

int main()
{
    int arr[] = {5, 6, 3, 4, 3, 6, 4};
    // int arr[] = { 1, 2, 3, 4, 5, 6 };

    int n = sizeof(arr) / sizeof(arr[0]);

    int minIndex;

    try
    {
        minIndex = findMinIndex(arr, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (minIndex != n)
    {
        cout << "The minimum index of the repeating element is  " << minIndex;
    }
    else
    {
        cout << "Invalid Input";
    }

    return 0;
}