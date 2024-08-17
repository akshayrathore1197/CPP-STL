#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // !creation

    // Create an empty vector
    vector<int> vec0;
    // Create a vector named vec, vector type int

    // Create a vector with 7 elements, all initialized to 1
    vector<int> arr(7, 1);
    // arr.begin() gives the location of first index (index 0) and * gives the value at that location
    // cout << *(arr.begin()) << endl;

    // Create a vector of size 10 with default values (0)
    vector<int> vec1(10);

    // Create a vector of size 15 with all elements initialized to 4
    vector<int> vec2(15, 4);

    vector<int> num;

    num.reserve(5);
    cout << num.capacity() << endl;
    num.push_back(10);
    num.push_back(20);
    num.push_back(30);
    num.push_back(40);

    cout << "Size : " << num.size() << endl;

    num.pop_back();
    // cout << "Size : " << num.size() << endl;

    // cout << num.front() << endl;
    // cout << num.back() << endl;

    // if (num.empty() != 0)
    //     puts("vector is empty");
    // else
    //     puts("vector is not empty");

    num[0] = 50;
    // cout << num[0] << endl;

    // cout << num[0] << endl;
    // cout << num.at(0) << endl;

    // cout << num.capacity() << endl;
    // cout << num.max_size() << endl;

    num.push_back(60);
    num.push_back(70);
    // cout << num.capacity() << endl;

    // num.clear();
    // cout << num.size() << endl;

    // num.insert(num.begin(),11);
    // cout << num[0] << endl;
    // num.insert(num.begin()+2,33);
    // cout << num[2] << endl;

    // cout<<num.size()<<endl;
    // num.erase(num.begin(),num.begin()+3);
    // cout<<num.size()<<endl;

    vector<int> first;
    vector<int> second;

    first.push_back(10);
    first.push_back(20);
    first.push_back(30);

    vector<int>::iterator it = first.begin();
    while (it != first.end())
    {
        cout << *it << " ";
        it++;
    }

    second.push_back(11);
    second.push_back(21);
    second.push_back(31);

    // for (auto i : first)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // first.swap(second);

    // for (auto i : first)
    // {
    //     cout << i << " ";
    // }

    return 0;
}