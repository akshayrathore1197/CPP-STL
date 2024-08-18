#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{

    // ! Set creation
    set<int> st; // Ordered set that stores unique elements in sorted order

    // ! Insertion of elements into the set
    st.insert(78);
    st.insert(7);
    st.insert(17);
    st.insert(10);

    // ! Iterating over the set
    set<int>::iterator it = st.begin();
    while (it != st.end())
        cout << *it++ << " "; // Prints elements in sorted order
    cout << endl;

    // ! Size of the set
    cout << "Size of the set: " << st.size() << endl;

    // Uncomment the following lines to clear the set
    // st.clear(); // Clears all elements from the set
    // cout << "Size of the set after clearing: " << st.size() << endl;

    // ! Searching for an element using find()
    if (st.find(5) != st.end()) // Checks if 5 is present in the set
        cout << "Key Found" << endl;
    else
        cout << "Key Not Found" << endl;

    // ! Checking the presence of an element using count()
    if (st.count(7) == 0) // Returns 1 if the element is present, otherwise 0
        puts("Key not found");
    else
        puts("Key found");

    return 0;
}
