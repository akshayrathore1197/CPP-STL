
## 1. Dynamic Memory Allocation

A vector has no memory allocated when it is first declared. The vector internally monitors its capacity and resizes as necessary as you add items using the `push_back()` function. It starts by allocating a small initial block of memory, typically enough to hold a few elements.

## 2. Capacity vs. Size

The vector holds two important characteristics:

- **Size**: The number of elements currently stored in the vector.
- **Capacity**: The most elements the vector can hold before necessitating reallocation.

What if the dynamic memory it initially allocated is entirely used up?

## 3. Dynamic Resizing

When the number of elements exceeds the current capacity, the vector dynamically resizes its memory block to accommodate more elements. It typically doubles the current capacity by allocating a new, larger memory block on the heap. Then, it efficiently copies the existing elements to the new memory location.

- **Capacity**: The C++ function `std::vector::capacity()` returns the size of allocated storage, expressed in terms of elements. This capacity is not necessarily equal to the size of the vector. It can be equal to or greater than the vector size.
- **Size**: The C++ function `std::vector::size()` returns the number of elements present in the vector. It is less than or equal to the capacity of the vector.

When `std::vector`'s internal memory is completely used up, it increases the size of its memory by performing the following steps:

1. **Allocate a Larger Memory Block**:

   - It allocates a bigger chunk of memory on the heap, typically almost double the size of the previously allocated memory.

2. **Copy Elements**:

   - All elements from the old memory location are copied to the new one. If the elements are user-defined objects, their copy constructors will be called, making this step relatively slow.

3. **Delete Old Memory**:
   - After successful copying, the old memory is deleted.

## 4. Efficient Element Access

One of the vector's key strengths is its efficient element access. Elements are stored contiguously in memory, allowing constant-time random access using the subscript operator `[]` or the `at()` function. This property makes vectors ideal for algorithms that require frequent or random element access.

## 5. Time Complexity

- **Resize Operation**: O(n)
  - The resizing operation, which involves doubling the capacity and copying elements, has a time complexity of O(n). However, the amortized time complexity of vector resizing is O(1), not O(n). This is because resizing occurs infrequently compared to the number of insertions performed on the vector.

## 6. Space Complexity

- **Space Complexity**: O(N)
  - The space complexity is O(N), as it requires memory proportional to the number of elements inserted into the vector.

