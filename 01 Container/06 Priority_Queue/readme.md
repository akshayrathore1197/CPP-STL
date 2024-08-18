The `std::priority_queue` in C++ is a container adapter provided by the Standard Library that implements a priority queue data structure. A priority queue is a type of queue where elements are served based on their priority rather than their order of insertion. The highest priority elements are served before lower priority elements.

### Key Features of `std::priority_queue`

1. **Underlying Container:**

   - By default, `std::priority_queue` uses `std::vector` as its underlying container. However, you can specify a different container, such as `std::deque`, if needed.

2. **Ordering:**

   - Elements are ordered based on a comparison function. By default, `std::priority_queue` uses `std::less<T>`, which results in a max-heap (the largest element is always at the top).

3. **Operations:**
   - **`push`**: Add an element to the queue with the appropriate priority.
   - **`pop`**: Remove the element with the highest priority.
   - **`top`**: Access the element with the highest priority without removing it.
   - **`empty`**: Check if the priority queue is empty.
   - **`size`**: Get the number of elements in the priority queue.

### Syntax

The basic syntax for defining a priority queue is:

```cpp
#include <queue>
#include <vector> // Default container
#include <functional> // For std::less and std::greater

std::priority_queue<Type, Container, Compare> pq;
```

- **`Type`**: The type of elements stored in the priority queue.
- **`Container`**: The underlying container type (e.g., `std::vector`, `std::deque`).
- **`Compare`**: The comparison function or functor used to determine the priority (e.g., `std::less<Type>` for a max-heap or `std::greater<Type>` for a min-heap).

### Example Usage

Here’s an example that demonstrates the use of `std::priority_queue`:

```cpp
#include <iostream>
#include <queue>
#include <vector>   // For std::vector
#include <functional> // For std::greater

int main() {
    // Create a max-heap priority queue (default)
    std::priority_queue<int> maxHeap;

    // Add elements
    maxHeap.push(10);
    maxHeap.push(5);
    maxHeap.push(20);

    // Print and remove elements (highest priority first)
    std::cout << "Max-Heap priority queue:" << std::endl;
    while (!maxHeap.empty()) {
        std::cout << maxHeap.top() << " "; // Outputs: 20 10 5
        maxHeap.pop();
    }
    std::cout << std::endl;

    // Create a min-heap priority queue
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    // Add elements
    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(20);

    // Print and remove elements (lowest priority first)
    std::cout << "Min-Heap priority queue:" << std::endl;
    while (!minHeap.empty()) {
        std::cout << minHeap.top() << " "; // Outputs: 5 10 20
        minHeap.pop();
    }
    std::cout << std::endl;

    return 0;
}
```

### Important Points

- **Default Behavior:** By default, `std::priority_queue` is a max-heap. This means the largest element is always at the top of the queue.

- **Custom Comparators:** You can change the behavior of the priority queue by providing a custom comparison function or functor. For example, using `std::greater<T>` makes it a min-heap where the smallest element is at the top.

- **Underlying Container:** While `std::vector` is the default underlying container, you can use `std::deque` or other sequence containers if you need different behavior or constraints. The container must support random access iterators and have constant time `push_back` and `pop_back` operations.

- **No Iterators:** `std::priority_queue` does not provide iterators because it is primarily designed for efficient priority-based access rather than iteration over all elements.

### Use Cases

- **Job Scheduling:** When tasks need to be processed based on priority, such as in job scheduling systems.
- **Algorithms:** Used in algorithms like Dijkstra's shortest path algorithm or A\* search algorithm where priority-based processing is required.
- **Event Simulation:** Managing events in simulations where events are handled based on their scheduled time or priority.

`std::priority_queue` is a powerful and flexible container adapter that can efficiently handle scenarios where elements need to be processed according to their priority.
