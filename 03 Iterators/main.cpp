#include <iostream>
#include <vector>
#include <forward_list>
#include <list>

using namespace std;

int main()
{
    // ! Vector (Random Access Iterator)

    vector<int> arr = {10, 20, 30};

    // Vector Iteration: Creation and Output
    // Vector uses random access iterators, which allow both forward and backward traversal.
    vector<int>::iterator it1 = arr.begin();
    while (it1 != arr.end())
    {
      
        cout << *it1++ << " "; // Dereference it1 to get the current element, then increment it to point to the next element.
    }
    cout << endl;

    // ! Forward List (Forward Iterator)

    forward_list<int> fList = {10, 20, 30};
    forward_list<int>::iterator it2 = fList.begin();

    // Modify elements of forward_list
    // Forward iterators only support forward traversal. Here, we add 5 to each element.
    while (it2 != fList.end())
    {
        *it2 = *it2 + 5; // Dereference it2 to get the current element, modify it by adding 5.
        ++it2; // Move the iterator to the next element.
    }

    // Reset iterator to the beginning to print modified elements
    it2 = fList.begin();
    while (it2 != fList.end())
    {
       
        // cout << *it2++ << " "; // Print the current element and move to the next.
    }
    cout << endl;

    // Forward List does not support backward traversal
    // Attempting to move backwards with a forward iterator is incorrect and commented out.
    forward_list<int>::iterator it3 = fList.end();
    while (it3 != fList.begin())
    {
       
        // cout << *it3-- << " "; // This operation is invalid for forward_list.
    }

    // ! List (Bidirectional Iterator)

    list<int> myList = {11, 22, 33};
    list<int>::iterator it4 = myList.begin();

    // Forward Traversal and Modification
    // Bidirectional iterators support both forward and backward traversal.
    while (it4 != myList.end())
    {
        *it4 = *it4 + 2; // Dereference it4 to get the current element, modify it by adding 2.
        cout << *it4++ << " "; // Print the current element and move to the next.
    }
    cout << endl;

    // Backward Traversal
    // We need to move the iterator to the previous element to print in reverse.
    auto it5 = myList.end();
    while (it5 != myList.begin())
    {
        cout << *--it5 + 8 << " "; // Move iterator to the previous element and print it with an added value.
    }
    cout << endl;

    // ! Vector (Random Access Iterator)

    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int>::iterator it6 = vec.begin();

    // Forward Traversal
    // Random access iterators support efficient forward and backward traversal.
    while (it6 != vec.end())
    {
        cout << *it6++ << " "; // Print the current element and move to the next.
    }
    cout << endl;

    // Backward Traversal
    // Move iterator to the previous element to print in reverse.
    auto it7 = vec.end();
    while (it7 != vec.begin())
    {
        cout << *--it7 << " "; // Move iterator to the previous element and print it.
    }
    cout << endl;

    return 0;
}
