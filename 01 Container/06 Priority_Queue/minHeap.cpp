#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{

    //! min-Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    // min-Heap -> minimum value -> highest priority

    pq.push(5);
    pq.push(3);
    pq.push(8);
    pq.push(1);
    pq.push(4);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    return 0;
}