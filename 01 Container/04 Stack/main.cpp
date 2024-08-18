#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // ! Creation of a Stack

    // Create an empty stack of integers
    stack<int> st;

    // ! Insertion into the Stack

    // Push elements onto the stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // ! Stack Operations

    // Print the size of the stack
    cout << "Stack size: " << st.size() << endl;

    // Print the top element of the stack (last pushed element)
    cout << "Top element: " << st.top() << endl;

    // Remove the top element from the stack (pop)
    st.pop();

    // Print the size of the stack after popping
    cout << "Stack size after pop: " << st.size() << endl;

    // Print the new top element of the stack
    cout << "New top element: " << st.top() << endl;

    // Check if the stack is empty
    if (st.empty())
        puts("Stack is empty");
    else
        puts("Stack is not empty");

    return 0;
}
