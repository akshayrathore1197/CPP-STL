#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // ! Creation of Vectors

    // Create an empty vector of integers
    vector<int> vec0;

    // Create a vector with 7 elements, all initialized to 1
    vector<int> arr(7, 1);
    // arr.begin() returns an iterator to the first element of the vector
    // *arr.begin() dereferences the iterator to get the value at the first position
    // cout << *(arr.begin()) << endl;

    // Create a vector of size 10 with default values (0)
    vector<int> vec1(10);

    // Create a vector of size 15 with all elements initialized to 4
    vector<int> vec2(15, 4);

    // Create an empty vector named num
    vector<int> num;

    // Reserve space for 5 elements in vector num (pre-allocate memory)
    num.reserve(5);
    cout << "Initial capacity: " << num.capacity() << endl; // Print initial capacity

    // Add elements to the vector
    num.push_back(10);
    num.push_back(20);
    num.push_back(30);
    num.push_back(40);

    cout << "Size after adding elements: " << num.size() << endl; // Print current size

    // Remove the last element from the vector
    num.pop_back();
    cout << "Size after pop_back: " << num.size() << endl; // Print size after removal

    // Access and print the first and last elements of the vector
    cout << "First element: " << num.front() << endl;
    cout << "Last element: " << num.back() << endl;

    // Check if the vector is empty
    if (num.empty())
        puts("Vector is empty");
    else
        puts("Vector is not empty");

    // Modify the first element of the vector
    num[0] = 50;
    cout << "Modified first element: " << num[0] << endl;

    // Access elements using both array-style indexing and at() method
    cout << "Using num[0]: " << num[0] << endl;
    cout << "Using num.at(0): " << num.at(0) << endl;

    // Print current capacity and maximum size of the vector
    cout << "Current capacity: " << num.capacity() << endl;
    cout << "Maximum possible size: " << num.max_size() << endl;

    // Add more elements to the vector
    num.push_back(60);
    num.push_back(70);
    cout << "Capacity after adding more elements: " << num.capacity() << endl;

    // Clear all elements from the vector
    num.clear();
    cout << "Size after clear: " << num.size() << endl;

    // Insert elements at specific positions in the vector
    num.insert(num.begin(), 11); // Insert at the beginning
    cout << "Element at the beginning after insert: " << num[0] << endl;
    num.insert(num.begin() + 2, 33); // Insert at index 2
    cout << "Element at index 2 after insert: " << num[2] << endl;

    // Erase a range of elements from the vector
    cout << "Size before erase: " << num.size() << endl;
    num.erase(num.begin(), num.begin() + 3); // Erase the first three elements
    cout << "Size after erase: " << num.size() << endl;

    // ! Iteration and Swapping

    // Create two vectors named first and second
    vector<int> first;
    vector<int> second;

    // Add elements to the first vector
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);

    // Use an iterator to traverse and print elements of the first vector
    vector<int>::iterator it = first.begin();
    while (it != first.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    // Add elements to the second vector
    second.push_back(11);
    second.push_back(21);
    second.push_back(31);

    // Use a range-based for loop to print elements of the first vector
    for (auto i : first)
    {
        cout << i << " ";
    }
    cout << endl;

    // Swap the contents of the first and second vectors
    first.swap(second);

    // Print elements of the first vector after swapping
    for (auto i : first)
    {
        cout << i << " ";
    }

    return 0;
}
