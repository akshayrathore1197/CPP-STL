#include <iostream>
#include <algorithm> // For min_element and max_element
#include <vector>
using namespace std;

int main()
{
    // Initialize a vector 'arr' with values: 10, 20, 30, 40, 50
    vector<int> arr = {10, 20, 30, 40, 50};

    // ! min_element
    // * min_element finds the iterator to the smallest element in a specified range
    // * It takes two arguments:
    //   1. The beginning iterator of the range (arr.begin())
    //   2. The ending iterator of the range (arr.end())
    // * It returns an iterator pointing to the minimum element
    // * Dereferencing this iterator gives the value of the smallest element
    // * In this case, it finds the smallest element in 'arr'
    auto min = min_element(arr.begin(), arr.end());
    cout << "Minimum element in the vector: " << *min << endl; 

    // ! max_element
    // * max_element finds the iterator to the largest element in a specified range
    // * It takes two arguments:
    //   1. The beginning iterator of the range (arr.begin())
    //   2. The ending iterator of the range (arr.end())
    // * It returns an iterator pointing to the maximum element
    // * Dereferencing this iterator gives the value of the largest element
    // * In this case, it finds the largest element in 'arr'
    auto max = max_element(arr.begin(), arr.end());
    cout << "Maximum element in the vector: " << *max << endl; 

    return 0;
}
