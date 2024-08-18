#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main()
{

    set<int> st;
    st.insert(78);
    st.insert(7);
    st.insert(17);
    st.insert(10);

    set<int>::iterator it = st.begin();
    while (it != st.end())
        cout << *it++ << " ";

    cout << st.size() << endl;
    // st.clear();
    // cout << st.size() << endl;

    if (st.find(5) != st.end())
        cout << "Key Found" << endl;

    else
        cout << "Key Not Found" << endl;

    if (st.count(7) == 0)
        puts("Key not found");
    else
        puts("Key found");

    return 0;
}