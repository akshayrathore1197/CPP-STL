#include <iostream>
#include <stack>
using namespace std;
int main()
{

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << st.size() << endl;
    cout << st.top() << endl;

    st.pop();

    cout << st.size() << endl;
    cout << st.top() << endl;

    if (st.empty() == true)
        puts("Stack is empty");

    else
        puts("Stack is not ");


    return 0;
}