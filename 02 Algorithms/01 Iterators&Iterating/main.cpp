#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Function to print double the value of an integer
void printDouble(int x)
{
    cout << 2 * x << " ";
}

// Function to check if an integer is even
int checkEven(int x)
{
    return x % 2 == 0;
}

int main()
{
    // Initialize a vector with 6 elements
    vector<int> arr(6);
    arr[0] = 14;
    arr[1] = 78;
    arr[2] = 42;
    arr[3] = 43;
    arr[4] = 43;
    arr[5] = 33;

    // ! for_each
    // * for_each applies a function to each element in the range
    // * Here, printDouble is applied to each element of arr, printing double the value of each element
    // for_each(arr.begin(), arr.end(), printDouble);

    // ! find
    // * find searches for the first occurrence of a specific value in the range
    // * It returns an iterator to the found element or to arr.end() if not found
    // * Here, it searches for the value 0 in arr
    int target0 = 0;
    auto it0 = find(arr.begin(), arr.end(), target0);
    // cout << *it0; 

    // ! find_if
    // * find_if searches for the first element that satisfies a given condition
    // * It returns an iterator to the first element that meets the condition or to arr.end() if none found
    // * Here, it searches for the first even number in arr
    auto it1 = find_if(arr.begin(), arr.end(), checkEven);
    // cout << *it1;  

    // ! count
    // * count counts the number of occurrences of a specific value in the range
    // * Here, it counts how many times the value 43 appears in arr
    int target1 = 43;
    int ans0 = count(arr.begin(), arr.end(), target1);
    // cout << ans0;  

    // ! count_if
    // * count_if counts the number of elements that satisfy a given condition
    // * Here, it counts how many even numbers are in arr
    int ans1 = count_if(arr.begin(), arr.end(), checkEven);
    // cout << ans1;

    // ! sort
    // * sort arranges the elements in ascending order
    // * After sorting, the elements of arr will be in ascending order
    sort(arr.begin(), arr.end());
    for (int a : arr)
        cout << a << " ";
    cout << endl;

    // ! reverse
    // * reverse reverses the order of elements in the range
    // * Here, it will reverse the sorted array, placing the largest element first
    // reverse(arr.begin(), arr.end());
    // for (int a : arr)
    //     cout << a << " ";
    // cout << endl;

    // ! rotate
    // * rotate shifts the elements in the range by a specified number of positions
    // * It rotates the array to the right by 4 positions
    // * If the number of positions is negative, it rotates to the left
    // rotate(arr.begin(), arr.begin() + 4, arr.end());
    // for (int a : arr)
    //     cout << a << " ";
    // cout << endl;

    // ! unique
    // * unique removes consecutive duplicate elements from the range
    // * It returns an iterator to the new end of the array after duplicates are removed
    // * It does not modify the order of remaining elements
    // auto it2 = unique(arr.begin(), arr.end());
    // arr.erase(it2, arr.end());
    // for (int a : arr)
    //     cout << a << " ";
    // cout << endl;

    // ! partition
    // * partition rearranges the elements so that elements satisfying a condition appear before those that do not
    // * It returns an iterator to the new end of the first partition
    // * Here, elements that are even will be at the beginning of the array, followed by odd elements
    auto it3 = partition(arr.begin(), arr.end(), checkEven);
    for (int a : arr)
        cout << a << " ";
    cout << endl;

    return 0;
}
