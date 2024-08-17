#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /**
     * Create a 2D vector with 5 rows and 4 columns, all initialized to 0
     */
    vector<vector<int>> arr(5, vector<int>(4, 0));

    int totalRow = arr.size();
    int totalCol = arr[0].size();

    /**
     * Create a jagged 2D vector with varying number of columns in each row
     */
    vector<vector<int>> ajeebVector(4);
    ajeebVector[0] = vector<int>(4);
    // Row 0: [_, _, _, _]    // 4 elements

    ajeebVector[1] = vector<int>(5);
    // Row 1: [_, _, _, _, _] // 5 elements

    ajeebVector[2] = vector<int>(3);
    // Row 2: [_, _, _]       // 3 elements

    ajeebVector[3] = vector<int>(2);
    // Row 3: [_, _]          // 2 elements

    int totalRow0 = ajeebVector.size();
    cout << "Total rows in ajeebVector: " << totalRow0 << endl;

    /**
     * Print the number of columns in each row of ajeebVector
     */
    for (auto i : ajeebVector)
    {
        cout << "Number of columns in row : " << i.size() << endl;
    }

    return 0;
}