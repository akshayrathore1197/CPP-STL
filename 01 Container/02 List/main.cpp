#include <iostream>
#include <list>
using namespace std;
int main()
{
    //!    creation

    list<int> myList;

    //! insertion
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    myList.push_front(5);
    myList.push_front(15);

    for (auto i : myList)
    {
        cout << i << " ";
    }
    cout << endl;

    myList.pop_back();
    for (auto i : myList)
    {
        cout << i << " ";
    }
    cout << endl;

    myList.pop_front();
    for (auto i : myList)
    {
        cout << i << " ";
    }
    cout << endl;

    // cout << myList.size() << endl;
    // myList.clear();
    // cout << myList.size() << endl;

    if (myList.empty() != 0)
        puts("List is empty");
    else
        puts("List is not empty");

    cout << myList.front() << endl;
    cout << myList.back() << endl;

    myList.push_front(10);
    myList.push_back(10);

    cout << "Before removing\n";
    list<int>::iterator it0 = myList.begin();
    while (it0 != myList.end())
    {
        cout << *it0++ << " ";
    }
    cout << endl;

    myList.remove(10);
    cout << "After removing\n";
    list<int>::iterator it1 = myList.begin();
    while (it1 != myList.end())
    {
        cout << *it1++ << " ";
    }
    cout << endl;

    myList.push_front(95);
    myList.push_back(25);
    myList.push_back(65);
    myList.push_back(35);

    myList.insert(myList.begin(), 100);
    for (auto i : myList)
    {
        cout << i << " ";
    }
    cout << endl;

    auto start = myList.begin();
    advance(start, 2); // Point to the 3rd element (value 5)
    cout << *start << endl;

    auto end = myList.end();
    advance(end, -3); // Point to the 5th element (value 25)
    cout << *end << endl;

    myList.erase(start, end); // Removes elements with values 5, 20.

    for (auto i : myList)
    {
        cout << i << " ";
    }
    cout << endl;

    puts("**********************");

    list<int> first;
    list<int> second;

    first.push_back(10);
    first.push_back(20);
    first.push_back(30);

    puts("Before Swap");
    for (auto i : first)
    {
        cout << i << " ";
    }
    cout << endl;

    second.push_back(11);
    second.push_back(22);
    second.push_back(33);

    first.swap(second);

    puts("After Swap");
    for (auto i : first)
    {
        cout << i << " ";
    }
    cout<<endl;

    first.clear();
     puts("After Clear");
  cout<<first.size();

    return 0;
}