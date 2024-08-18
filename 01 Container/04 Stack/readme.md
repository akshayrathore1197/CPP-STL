In C++, `std::stack` is a container adapter from the Standard Library that models a stack data structure. A stack operates on a last-in, first-out (LIFO) principle, meaning the last element added is the first one to be removed. `std::stack` is implemented using another container, typically `std::deque` or `std::list`, which provides the underlying storage.

Here's a detailed overview of `std::stack`:

### Basic Usage

1. **Include the Header:**

   To use `std::stack`, you need to include the `<stack>` header.

   ```cpp
   #include <iostream>
   #include <stack>
   ```

2. **Creating a Stack:**

   You can declare a stack like this:

   ```cpp
   std::stack<int> myStack;
   ```

3. **Adding Elements (Push):**

   Use the `push` method to add elements to the top of the stack.

   ```cpp
   myStack.push(10);
   myStack.push(20);
   myStack.push(30);
   ```

4. **Accessing Elements:**

   - **Top Element:** Use `top()` to access the element at the top of the stack without removing it.

     ```cpp
     int topElement = myStack.top(); // 30
     ```

5. **Removing Elements (Pop):**

   Use the `pop` method to remove the element from the top of the stack.

   ```cpp
   myStack.pop(); // Removes 30
   ```

6. **Checking the Size and Empty Status:**

   - **Size:** Use `size()` to get the number of elements in the stack.

     ```cpp
     size_t stackSize = myStack.size();
     ```

   - **Empty:** Use `empty()` to check if the stack is empty.

     ```cpp
     bool isEmpty = myStack.empty(); // true if the stack is empty
     ```

### Example Program

Here is a complete example demonstrating the use of `std::stack`:

```cpp
#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;

    // Push elements
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // Access and print the top element
    std::cout << "Top element: " << myStack.top() << std::endl; // Outputs 3

    // Pop the top element
    myStack.pop(); // Removes 3
    std::cout << "Top element after pop: " << myStack.top() << std::endl; // Outputs 2

    // Check size
    std::cout << "Stack size: " << myStack.size() << std::endl; // Outputs 2

    // Check if stack is empty
    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    return 0;
}
```

### Important Points

- **Container Type:** By default, `std::stack` uses `std::deque` as its underlying container. However, you can specify a different container (such as `std::list`) if needed. This is done via a template parameter:

  ```cpp
  std::stack<int, std::list<int>> myStackUsingList;
  ```

- **Performance:** The `push`, `pop`, `top`, and `size` operations are O(1) (constant time) on average.

- **No Direct Iteration:** Unlike `std::vector` or `std::list`, `std::stack` does not provide direct iterators for iterating over its elements. If you need to iterate, you must access the elements via `top()` and `pop()` in a loop, or use the underlying container directly if you need more advanced operations.

- **Usage Scenarios:** `std::stack` is useful in scenarios where you need a LIFO structure, such as in depth-first search algorithms, undo mechanisms in applications, and for managing function calls in a recursive manner.

The `std::stack` container adapter provides a straightforward and efficient way to manage data in a LIFO order.