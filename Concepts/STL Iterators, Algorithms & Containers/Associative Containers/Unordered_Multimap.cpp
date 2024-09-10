#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    /*
    * Elements in an unordered multimap are not sorted based on their keys or values. Instead, they are organized into buckets using hash values for quick direct access by key, resulting in constant average time complexity.
    */

    unordered_multimap <int, int> umm;
    umm.insert(pair <int, int> (1, 100));
    umm.insert(pair <int, int> (2, 200));
    umm.insert(pair <int, int> (3, 300));
    umm.insert(pair <int, int> (4, 400));
    umm.insert(pair <int, int> (4, 500));
  

    cout << "Unordered Multimap Elements: " << endl;
    for(auto &pair: umm){
        cout << pair.first << " -> " << pair.second << endl;
    }
    cout << endl;

    cout << "Size: " << umm.size() << endl;
    cout << "Bucket Size: " << umm.bucket_count() << endl;
    cout << "Load Factor: " << umm.load_factor() << endl;
    cout << "Max Load Factor: " << umm.max_load_factor() << endl;

    return 0;
}