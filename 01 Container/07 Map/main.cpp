#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{

    // ! Map creation
    // Uncomment the line below to use an unordered_map instead of map
    // unordered_map<string, string> table; // Unordered map (hash table, no guaranteed order)

    map<string, string> table; // Ordered map (elements are sorted by key)

    // ! Insertion of elements into the map
    // Inserting key-value pairs using the subscript operator
    table["1"] = "USA";
    table["3"] = "France";
    table["0"] = "India";
    table["2"] = "UK";

    // Inserting a key-value pair using make_pair
    table.insert(make_pair("en", "England"));

    // Inserting a key-value pair using a pair object
    pair<string, string> p;
    p.first = "fr";
    p.second = "France";
    table.insert(p);

    // Updating an existing key-value pair
    table["in"] = "Bharat";

    // ! Iterating over the map using an iterator
    map<string, string>::iterator it = table.begin();

    // Print each key-value pair in the map
    while (it != table.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    // ! Searching for a key in the map using find()
    if (table.find("in") != table.end())
        cout << "Key Found" << endl;
    else
        cout << "Key Not Found" << endl;

    // ! Checking the presence of a key using count()
    if (table.count("in") == 0)
        puts("Key not found");
    else
        puts("Key found");

    return 0;
}
