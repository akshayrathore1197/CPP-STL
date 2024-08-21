#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    // Initialize a vector 'arr' with values: 22, 3, 55, 44, 15, 68
    vector<int> arr = {22, 3, 55, 44, 15, 68};

    // * make_heap
    // * Converts the vector into a max-heap
    // * A max-heap is a binary heap where the parent node is greater than or equal to its children
    // * After this operation, the largest element will be at the root (index 0) of the heap
    make_heap(arr.begin(), arr.end());
    cout << "Vector after make_heap: ";
    for (int a : arr)
        cout << a << " ";
    cout << endl;

    // ! insertion
    // * Time Complexity: O(n)
    // * Add a new element to the heap while maintaining the heap property
    // * Adding a new element will disrupt the heap property, so we need to reheapify
    // * push_heap is used to add the new element while maintaining the heap property
    arr.push_back(101);                // Add a new element to the end of the vector
    push_heap(arr.begin(), arr.end()); // Reheapify to maintain heap property
    cout << "Vector after push_heap: ";
    for (int a : arr)
        cout << a << " ";
    cout << endl;

    // ! deletion
    // * Time Complexity: O(log n)
    // * Remove the maximum element (root of the heap)
    // * pop_heap moves the largest element to the end of the vector and then reheapifies the remaining heap
    // * After calling pop_heap, the maximum element is still in the vector, but it's now at the end
    // * We need to call pop_back to actually remove the element from the vector
    pop_heap(arr.begin(), arr.end()); // Move the largest element to the end
    cout << "Vector after pop_heap (before pop_back): ";
    for (int a : arr)
        cout << a << " ";
    cout << endl;

    arr.pop_back(); // Remove the largest element from the end of the vector
    cout << "Vector after pop_back: ";
    for (int a : arr)
        cout << a << " ";
    cout << endl;

    // ! sort_heap
    // * Time Complexity: O(n log n)
    // * Converts the heap into a sorted range
    // * After sorting, the heap property is lost, and the elements are sorted in ascending order
    sort_heap(arr.begin(), arr.end());
    cout << "Vector after sort_heap: ";
    for (int a : arr)
        cout << a << " ";
    cout << endl;

    return 0;
}
