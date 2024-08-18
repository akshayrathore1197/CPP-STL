#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int main()
{
    //  ! creation
    priority_queue<int> pq;
    // by default max-Heap -> maximum value -> highest priority

    pq.push(28);
    pq.push(4);
    pq.push(84);
    pq.push(33);
    pq.push(54);
    pq.push(45);

    // Top element -> highest priority element
    cout << pq.top() << endl;

    pq.pop();
    cout << pq.top() << endl;

    pq.pop();
    cout << pq.top() << endl;

    if (pq.empty() != 0)
        puts("Empty");
    else
        puts("Not empty");

    return 0;
}