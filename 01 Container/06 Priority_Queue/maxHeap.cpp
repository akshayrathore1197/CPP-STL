#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    // ! Max-Heap Implementation using Priority Queue

    // Create a priority queue (max-heap) of integers
    priority_queue<int> pq;
    // By default, priority_queue is a max-heap in C++.
    // The element with the maximum value has the highest priority.

    // Add elements to the max-heap
    pq.push(28);
    pq.push(4);
    pq.push(84);
    pq.push(33);
    pq.push(54);
    pq.push(45);

    // Display the top element (maximum value)
    cout << "Top element (max): " << pq.top() << endl;

    // Remove the top element (maximum value)
    pq.pop();

    // Display the new top element after removal
    cout << "New top element (max): " << pq.top() << endl;

    // Remove the top element again
    pq.pop();

    // Display the next top element
    cout << "Next top element (max): " << pq.top() << endl;

    // Check if the priority queue is empty
    if (pq.empty())
        puts("Empty");
    else
        puts("Not empty");

    return 0;
}
