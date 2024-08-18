#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{

    //    ! creation

    // unordered_map<string, string> table;

    map<string, string> table;

    // insertion
    // table["in"] = "India";
    // table["us"] = "USA";
    // table["uk"] = "UK";
    // table["fr"] = "France";

    table["1"] = "USA";
    table["3"] = "France";
    table["0"] = "India";
    table["2"] = "UK";

    table.insert(make_pair("en", "England"));

    pair<string, string> p;
    p.first = "fr";
    p.second = "France";
    table.insert(p);

    // cout << table.size() << endl;

    // table.clear();
    // cout << table.size() << endl;

    table["in"] = "Bharat";
    // cout << table.at("in") << endl;

    // for (auto i : table)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    // unordered_map<string, string>::iterator it = table.begin();

    map<string, string>::iterator it = table.begin();

    while (it != table.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    if (table.find("in") != table.end())
        cout << "Key Found" << endl;

    else
        cout << "Key Not Found" << endl;

    if (table.count("in") == 0)
        puts("Key not found");
    else
        puts("Key found");

    return 0;
}