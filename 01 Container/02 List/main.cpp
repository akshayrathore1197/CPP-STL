#include <iostream>
#include <list>
using namespace std;

int main()
{
    // ! Creation of a List

    // Create an empty list of integers
    list<int> myList;

    // ! Insertion into the List

    // Insert elements at the end of the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // Insert elements at the front of the list
    myList.push_front(5);
    myList.push_front(15);

    // Print the elements of the list
    for (auto i : myList)
    {
        cout << i << " ";
    }
    cout << endl;

    // Remove the last element from the list
    myList.pop_back();
    // Print the list after removing the last element
    for (auto i : myList)
    {
        cout << i << " ";
    }
    cout << endl;

    // Remove the first element from the list
    myList.pop_front();
    // Print the list after removing the first element
    for (auto i : myList)
    {
        cout << i << " ";
    }
    cout << endl;

    // ! Check if the List is Empty

    if (myList.empty())
        puts("List is empty");
    else
        puts("List is not empty");

    // Print the first and last elements of the list
    cout << "First element: " << myList.front() << endl;
    cout << "Last element: " << myList.back() << endl;

    // Add elements to the front and back of the list
    myList.push_front(10);
    myList.push_back(10);

    // ! Removing Specific Elements

    // Print the list before removing elements with value 10
    cout << "Before removing" << endl;
    list<int>::iterator it0 = myList.begin();
    while (it0 != myList.end())
    {
        cout << *it0++ << " ";
    }
    cout << endl;

    // Remove all elements with value 10 from the list
    myList.remove(10);

    // Print the list after removing elements with value 10
    cout << "After removing" << endl;
    list<int>::iterator it1 = myList.begin();
    while (it1 != myList.end())
    {
        cout << *it1++ << " ";
    }
    cout << endl;

    // ! Inserting Elements at Specific Positions

    // Add elements to the list
    myList.push_front(95);
    myList.push_back(25);
    myList.push_back(65);
    myList.push_back(35);

    // Insert an element at the beginning of the list
    myList.insert(myList.begin(), 100);

    // Print the list after insertion
    for (auto i : myList)
    {
        cout << i << " ";
    }
    cout << endl;

    // ! Advanced Iteration and Erasure

    // Create an iterator pointing to the 3rd element (value 5)
    auto start = myList.begin();
    advance(start, 2); // Move iterator forward by 2 positions
    cout << "Element at 3rd position: " << *start << endl;

    // Create an iterator pointing to the 5th element (value 25)
    auto end = myList.end();
    advance(end, -3); // Move iterator backward by 3 positions
    cout << "Element at 5th position: " << *end << endl;

    // Erase a range of elements from the list (from 3rd to 5th positions)
    myList.erase(start, end);

    // Print the list after erasing the elements
    for (auto i : myList)
    {
        cout << i << " ";
    }
    cout << endl;

    // ! Swapping Two Lists

    list<int> first;
    list<int> second;

    // Add elements to the first list
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);

    // Print the first list before swapping
    puts("Before Swap");
    for (auto i : first)
    {
        cout << i << " ";
    }
    cout << endl;

    // Add elements to the second list
    second.push_back(11);
    second.push_back(22);
    second.push_back(33);

    // Swap the contents of the first and second lists
    first.swap(second);

    // Print the first list after swapping
    puts("After Swap");
    for (auto i : first)
    {
        cout << i << " ";
    }
    cout << endl;

    // ! Clearing the List

    // Clear all elements from the first list
    first.clear();

    // Print the size of the first list after clearing
    puts("After Clear");
    cout << first.size();

    return 0;
}
