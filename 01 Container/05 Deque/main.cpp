#include <iostream>
#include <queue>
using namespace std;
int main()
{

    deque<int> dq;

    dq.push_back(6);
    dq.push_back(8);
    dq.push_back(10);

    dq.push_front(4);
    dq.push_front(2);
    dq.push_front(0);

    dq.pop_back();
    dq.pop_front();

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    cout << dq.size() << endl;

    // dq.clear();

    if (dq.empty() == true)
        puts("Deque is empty");
    else
        puts("Deque is not empty");
    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl;

    dq.erase(dq.begin() + 2);

    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl;

    dq.push_back(50);
    dq.push_back(40);
    dq.push_back(30);

    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl;

    auto start = dq.begin();
    advance(start, 2);

    auto end = dq.end();
    advance(end, -1);

    dq.erase(start, end);
    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << dq[0] << endl;
    cout << dq.at(1) << endl;

    dq.insert(dq.begin() + 2, 55);
    cout << dq.at(2) << endl;

    deque<int> one;
    deque<int> two;

    one.push_front(99);
    one.push_front(88);
    for (auto i : one)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << one.front() << endl;

    two.push_back(6);
    two.push_back(3);

    one.swap(two);
    for (auto i : one)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << one.front() << endl;

    deque<int>::iterator it = one.begin();
    while (it != one.end())
    {
        cout << *it++ << " ";
    }

    return 0;
}