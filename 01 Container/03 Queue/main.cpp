#include <iostream>
#include <queue>
using namespace std;
int main()
{

    queue<int> q;

    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);

    cout << q.size() << endl;
    q.pop();
    cout << q.size() << endl;

    if (q.empty() == true)
        puts("Queue is empty");
    else
        puts("Queue is not empty");

    cout << q.front() << endl;
    cout << q.back() << endl;

    queue<int> first;
    queue<int> second;

    first.push(10);
    first.push(10);

    cout << first.front() << " " << first.back() << endl;

    second.push(100);
    second.push(200);
    second.push(300);

first.swap(second);

    cout << first.front() << " " << first.back() << endl;

    return 0;
}