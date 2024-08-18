#include <iostream>
#include <deque>
using namespace std;

int main()
{
    // ! Creation of a Deque

    // Create an empty deque of integers
    deque<int> dq;

    // ! Insertion into the Deque

    // Push elements to the back of the deque
    dq.push_back(6);
    dq.push_back(8);
    dq.push_back(10);

    // Push elements to the front of the deque
    dq.push_front(4);
    dq.push_front(2);
    dq.push_front(0);

    // ! Deque Operations

    // Remove the element from the back of the deque
    dq.pop_back();

    // Remove the element from the front of the deque
    dq.pop_front();

    // Print the front and back elements of the deque
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    // Print the size of the deque
    cout << "Deque size: " << dq.size() << endl;

    // Uncomment the following lines to clear the deque
    // dq.clear();

    // Check if the deque is empty
    if (dq.empty())
        puts("Deque is empty");
    else
        puts("Deque is not empty");

    // Print all elements in the deque
    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl;

    // Remove the element at index 2
    dq.erase(dq.begin() + 2);

    // Print all elements in the deque after removal
    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl;

    // Push new elements to the back of the deque
    dq.push_back(50);
    dq.push_back(40);
    dq.push_back(30);

    // Print all elements in the deque after insertion
    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl;

    // Erase a range of elements from the deque
    auto start = dq.begin();
    advance(start, 2); // Move the start iterator to the 3rd element

    auto end = dq.end();
    advance(end, -1); // Move the end iterator to the 2nd last element

    dq.erase(start, end); // Remove the range from start to end (excluding end)

    // Print all elements in the deque after the range removal
    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl;

    // Access elements by index
    cout << "Element at index 0: " << dq[0] << endl;
    cout << "Element at index 1: " << dq.at(1) << endl;

    // Insert an element at the 3rd position (index 2)
    dq.insert(dq.begin() + 2, 55);
    cout << "Element at index 2 after insertion: " << dq.at(2) << endl;

    // ! Swapping Two Deques

    // Create two new deques
    deque<int> one;
    deque<int> two;

    // Push elements to the first deque
    one.push_front(99);
    one.push_front(88);

    // Print all elements in the first deque
    for (auto i : one)
    {
        cout << i << " ";
    }
    cout << endl;

    // Print the front element of the first deque
    cout << "Front element of first deque: " << one.front() << endl;

    // Push elements to the second deque
    two.push_back(6);
    two.push_back(3);

    // Swap the contents of the two deques
    one.swap(two);

    // Print all elements in the first deque after swapping
    for (auto i : one)
    {
        cout << i << " ";
    }
    cout << endl;

    // Print the front element of the first deque after swapping
    cout << "Front element of first deque after swap: " << one.front() << endl;

    // Print all elements in the first deque using an iterator
    deque<int>::iterator it = one.begin();
    while (it != one.end())
    {
        cout << *it++ << " ";
    }

    return 0;
}
