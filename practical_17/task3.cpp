#include <bits/stdc++.h>
#include <map>
#include <algorithm>
#include <iterator>
using namespace std;
void print(map<int, string> v)
{
    map<int, string>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << it->first << " " << it->second <<endl;
    cout <<endl;
}
int main()
{
    map<int, string> m;
    m.insert(pair<int, string>(4, "Ashish"));
    m.insert(pair<int, string>(8, "joshi"));
    m.insert(pair<int, string>(1, "Jay"));
    m.insert(pair<int, string>(5, "Prashant"));
    m.insert(pair<int, string>(2, "Karan"));
    m.insert(pair<int, string>(5, "Rohit"));
    m.insert(pair<int, string>(3, "Himanshu"));

    print(m);

    auto itr = m.find(3);
    cout << "itr is poiting to \n"<< itr->first << " " << itr->second << " \n";

    map<int, string> copyMap = m;
    cout << "The copyMap :\n";
    print(copyMap);

    cout << "Deleting a key-value from copyMap :\n";
    copyMap.erase(9);
    cout << "map After deleting key = 9 from it\n";
    print(copyMap);

    cout << "Size of the map is : " << copyMap.size()<<endl;
    cout << "MaxSize of map is : " << copyMap.max_size() <<endl;
    
    cout << "Checking whether map is empty or not after :\n";
    if (copyMap.empty())
        cout << "Map is empty\n";
    else
        cout << "Map is not empty\n";

    copyMap.clear();
    cout << "Map after Clearing it :\n";
    print(copyMap);
    return 0;
}
