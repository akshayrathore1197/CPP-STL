#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    // Initialize a vector 'arr' with values: 10, 20, 30, 40, 50, 60
    vector<int> arr = {10, 20, 30, 40, 50, 60};

    // ! binary_search
    // * binary_search checks if a given value exists in a sorted range
    // * It requires the range to be sorted (which 'arr' is)
    // * Returns true if the value is found, false otherwise
    // * Here, it checks if the value 40 exists in 'arr'
    int target = 40;
    bool ans = binary_search(arr.begin(), arr.end(), target);
    cout << "Binary search for " << target << ": " << (ans ? "Found" : "Not Found") << endl;

    // ! lower_bound
    // * lower_bound returns an iterator pointing to the first element that is not less than (i.e., greater or equal to) the given value
    // * It can be used to find the position where the given value could be inserted to maintain sorted order
    // * If the value is found, it points to that element; otherwise, it points to the first element greater than the value
    // * Here, it finds the position of the value 40 in 'arr'
    auto Lans = lower_bound(arr.begin(), arr.end(), target);
    cout << "Lower bound for " << target << ": " << *Lans << endl;

    // ! upper_bound
    // * upper_bound returns an iterator pointing to the first element that is greater than the given value
    // * It can be used to find the position where elements greater than the given value start
    // * If the value is found, it points to the first element after the given value; otherwise, it points to arr.end()
    // * Here, it finds the position of the first element greater than 40 in 'arr'
    auto Uans = upper_bound(arr.begin(), arr.end(), target);
    cout << "Upper bound for " << target << ": " << *Uans << endl;

    // ! equal_range
    // * equal_range returns a pair of iterators:
    //   1. The iterator to the first element that is not less than the given value (lower_bound)
    //   2. The iterator to the first element that is greater than the given value (upper_bound)
    // * It effectively finds the range of elements that are equal to the given value
    // * If the value is not present, it returns a range where both iterators point to the same position (i.e., lower_bound and upper_bound are the same)
    auto range = equal_range(arr.begin(), arr.end(), target);
    cout << "Equal range for " << target << ": [" 
         << (range.first != arr.end() ? to_string(*range.first) : "not found") 
         << ", " 
         << (range.second != arr.end() ? to_string(*range.second) : "end") 
         << ")" << endl;

    return 0;
}
