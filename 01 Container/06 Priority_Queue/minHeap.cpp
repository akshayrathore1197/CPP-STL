#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    //! Min-Heap Implementation using Priority Queue

    // Declare a priority queue with the following parameters:
    // - Type: int
    // - Container: vector<int>
    // - Comparator: greater<int> (used to create a min-heap)
    priority_queue<int, vector<int>, greater<int>> pq;

    // In a min-heap, the smallest element has the highest priority

    // Add elements to the priority queue (min-heap)
    pq.push(5);
    pq.push(3);
    pq.push(8);
    pq.push(1);
    pq.push(4);

    // Display the top element (smallest element in the min-heap)
    cout << "Top element (min): " << pq.top() << endl;

    // Remove the top element (smallest element)
    pq.pop();

    // Display the new top element after removal
    cout << "New top element (min): " << pq.top() << endl;

    return 0;
}
