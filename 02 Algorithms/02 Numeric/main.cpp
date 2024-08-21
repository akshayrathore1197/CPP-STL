#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric> 
using namespace std;

int main()
{
    // Initialize a vector 'arr' with 6 elements
    vector<int> arr(6);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    arr[5] = 60;

    // ! accumulate
    // * The accumulate algorithm computes the sum of all elements in a range
    // * It takes three arguments:
    //   1. The beginning iterator of the range (arr.begin())
    //   2. The ending iterator of the range (arr.end())
    //   3. The initial value to start the accumulation (0 in this case)
    // * The function returns the sum of the elements in the range [arr.begin(), arr.end())
    // * Here, it calculates the sum of the vector 'arr' which is: 10 + 20 + 30 + 40 + 50 + 60 = 210
    int totalSum = accumulate(arr.begin(), arr.end(), 0);
    cout << "Sum of all elements in the array is: " << totalSum << endl;

    // ! inner_product
    // * The inner_product algorithm computes the dot product of two sequences
    // * It takes four arguments:
    //   1. The beginning iterator of the first range (one.begin())
    //   2. The ending iterator of the first range (one.end())
    //   3. The beginning iterator of the second range (two.begin())
    //   4. The initial value for the dot product (0 in this case)
    // * The function multiplies corresponding elements of the two ranges and sums the results
    // * For vectors 'one' and 'two':
    //   - 1 * 3 = 3
    //   - 2 * 4 = 8
    //   - 3 * 5 = 15
    //   - Total dot product = 3 + 8 + 15 = 26
    vector<int> one = {1, 2, 3};
    vector<int> two = {3, 4, 5};
    int sum = inner_product(one.begin(), one.end(), two.begin(), 0);
    cout << "Inner product of vectors 'one' and 'two' is: " << sum << endl;

    // ! partial_sum
    // * The partial_sum algorithm computes the partial sums of a sequence
    // * It takes three arguments:
    //   1. The beginning iterator of the input range (arr2.begin())
    //   2. The ending iterator of the input range (arr2.end())
    //   3. The beginning iterator of the output range (partialSum.begin())
    // * It computes the cumulative sum of the elements in the range [arr2.begin(), arr2.end())
    // * For vector 'arr2':
    //   - Partial sum after processing each element:
    //     - 1 (0 + 1)
    //     - 1 + 2 = 3
    //     - 3 + 3 = 6
    //     - 6 + 4 = 10
    //   - Resulting vector 'partialSum' = {1, 3, 6, 10}
    vector<int> arr2 = {1, 2, 3, 4};
    vector<int> partialSum(arr2.size());
    partial_sum(arr2.begin(), arr2.end(), partialSum.begin());
    cout << "Partial sums of the vector 'arr2' are: ";
    for (int i : partialSum)
        cout << i << " ";
    cout << endl;

    // ! iota
    // * The iota algorithm fills a range with sequentially increasing values, starting from a specified value
    // * It takes three arguments:
    //   1. The beginning iterator of the range (arr3.begin())
    //   2. The ending iterator of the range (arr3.end())
    //   3. The starting value for the sequence (10 in this case)
    // * It fills the vector 'arr3' with values starting from 10 and increasing by 1 for each subsequent element
    // * Resulting vector 'arr3' = {10, 11, 12, 13, 14}
    vector<int> arr3(5);
    iota(arr3.begin(), arr3.end(), 10);
    cout << "Vector 'arr3' filled with sequential values starting from 10: ";
    for (int i : arr3)
        cout << i << " ";
    cout << endl;

    return 0;
}
