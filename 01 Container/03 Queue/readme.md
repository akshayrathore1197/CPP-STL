In C++, the `std::queue` is a container adapter provided by the Standard Library that models a queue data structure. It operates on a first-in, first-out (FIFO) principle. The `std::queue` is implemented using another container, typically `std::deque` or `std::list`, which provides the underlying storage.

Here's a detailed overview of `std::queue`:

### Basic Usage

1. **Include the Header:**

   To use `std::queue`, you need to include the `<queue>` header.

   ```cpp
   #include <iostream>
   #include <queue>
   ```

2. **Creating a Queue:**

   You can declare a queue like this:

   ```cpp
   std::queue<int> myQueue;
   ```

3. **Adding Elements (Enqueue):**

   Use the `push` method to add elements to the back of the queue.

   ```cpp
   myQueue.push(10);
   myQueue.push(20);
   myQueue.push(30);
   ```

4. **Accessing Elements:**

   - **Front Element:** Use `front()` to access the element at the front of the queue.

     ```cpp
     int frontElement = myQueue.front(); // 10
     ```

   - **Back Element:** Use `back()` to access the element at the back of the queue.

     ```cpp
     int backElement = myQueue.back(); // 30
     ```

5. **Removing Elements (Dequeue):**

   Use the `pop` method to remove the element from the front of the queue.

   ```cpp
   myQueue.pop(); // Removes 10
   ```

6. **Checking the Size and Empty Status:**

   - **Size:** Use `size()` to get the number of elements in the queue.

     ```cpp
     size_t queueSize = myQueue.size();
     ```

   - **Empty:** Use `empty()` to check if the queue is empty.

     ```cpp
     bool isEmpty = myQueue.empty(); // true if the queue is empty
     ```

### Example Program

Here is a complete example demonstrating the use of `std::queue`:

```cpp
#include <iostream>
#include <queue>

int main() {
    std::queue<int> myQueue;

    // Enqueue elements
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    // Access and print elements
    std::cout << "Front element: " << myQueue.front() << std::endl; // Outputs 1
    std::cout << "Back element: " << myQueue.back() << std::endl;   // Outputs 3

    // Dequeue elements
    myQueue.pop(); // Removes 1
    std::cout << "Front element after pop: " << myQueue.front() << std::endl; // Outputs 2

    // Check size
    std::cout << "Queue size: " << myQueue.size() << std::endl; // Outputs 2

    // Check if queue is empty
    if (myQueue.empty()) {
        std::cout << "Queue is empty." << std::endl;
    } else {
        std::cout << "Queue is not empty." << std::endl;
    }

    return 0;
}
```

### Important Points

- **Container Type:** By default, `std::queue` uses `std::deque` as its underlying container. However, you can specify a different container (such as `std::list`) if needed. This is done via a template parameter:

  ```cpp
  std::queue<int, std::list<int>> myQueueUsingList;
  ```

- **Performance:** The `push` and `pop` operations are O(1) (constant time) on average. The `front`, `back`, and `size` operations are also O(1).

- **No Direct Iteration:** Unlike `std::vector` or `std::list`, `std::queue` does not provide direct iterators for iterating over its elements. If you need to iterate, you must access the elements via `front()` and `pop()` in a loop, or use the underlying container directly if you need more advanced operations.

`std::queue` is ideal for scenarios where you need a simple FIFO structure, such as in task scheduling, breadth-first search algorithms, and managing requests in a processing system.
