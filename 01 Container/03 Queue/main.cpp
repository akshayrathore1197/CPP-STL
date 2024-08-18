#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // ! Creation of a Queue

    // Create an empty queue of integers
    queue<int> q;

    // ! Insertion into the Queue

    // Push elements into the queue (enqueue)
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);

    // ! Queue Operations

    // Print the size of the queue
    cout << "Queue size: " << q.size() << endl;

    // Remove the front element from the queue (dequeue)
    q.pop(); 

    // Print the size of the queue after dequeue
    cout << "Queue size after pop: " << q.size() << endl;

    // Check if the queue is empty
    if (q.empty())
        puts("Queue is empty");
    else
        puts("Queue is not empty");

    // Print the front and back elements of the queue
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    // ! Swapping Two Queues

    // Create two new queues
    queue<int> first;
    queue<int> second;

    // Push elements into the first queue
    first.push(10);
    first.push(10);

    // Print the front and back elements of the first queue
    cout << "First queue: " << first.front() << " " << first.back() << endl;

    // Push elements into the second queue
    second.push(100);
    second.push(200);
    second.push(300);

    // Swap the contents of the first and second queues
    first.swap(second);

    // Print the front and back elements of the first queue after swapping
    cout << "After swap, first queue: " << first.front() << " " << first.back() << endl;

    return 0;
}
