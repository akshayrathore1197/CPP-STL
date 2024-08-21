#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator> // For back_inserter and inserter

using namespace std;

int main()
{
    // Initialize two vectors with some values
    vector<int> first = {1, 2, 3, 4};
    vector<int> second = {3, 4, 5, 6};

    // ! set_union
    // * Computes the union of two sorted ranges and stores the result in a third range
    // * Syntax: set_union(first_begin, first_end, second_begin, second_end, result_begin);
    // * first_begin, first_end: Iterators specifying the range of the first sorted sequence
    // * second_begin, second_end: Iterators specifying the range of the second sorted sequence
    // * result_begin: Output iterator where the result will be stored
    // * Note: The result vector should be empty or have enough space to store the result
    vector<int> result;
    set_union(first.begin(), first.end(), second.begin(), second.end(), back_inserter(result));
    cout << "Union of first and second: ";
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    cout << endl;

    // ! set_intersection
    // * Computes the intersection of two sorted ranges and stores the result in a third range
    vector<int> result2;
    set_intersection(first.begin(), first.end(), second.begin(), second.end(), back_inserter(result2));
    cout << "Intersection of first and second: ";
    for (int i = 0; i < result2.size(); i++)
        cout << result2[i] << " ";
    cout << endl;

    // ! set_difference
    // * Computes the difference between two sorted ranges (elements in the first range that are not in the second range)
    // Example: For first = {1, 2, 3, 4} and second = {3, 4, 5, 6}, the difference is {1, 2}.
    vector<int> result3;
    set_difference(first.begin(), first.end(), second.begin(), second.end(), back_inserter(result3));
    cout << "Difference of first and second: ";
    for (int i : result3)
        cout << i << " ";
    cout << endl;

    // ! set_symmetric_difference
    // * Computes the symmetric difference of two sorted ranges (elements in either of the ranges but not in both)
    // Example: For first = {1, 2, 3, 4} and second = {3, 4, 5, 6}, the symmetric difference is {1, 2, 5, 6}.
    vector<int> result4;
    set_symmetric_difference(first.begin(), first.end(), second.begin(), second.end(), back_inserter(result4));
    cout << "Symmetric difference of first and second: ";
    for (int i : result4)
        cout << i << " ";
    cout << endl;

    return 0;
}
