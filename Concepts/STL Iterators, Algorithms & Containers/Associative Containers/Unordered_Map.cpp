#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    /*
    ! Unordered_Map():
    * In contrast to a regular map, the order of keys in an unordered map is undefined. They are distributed accross buckets.
    * Is like a data structure of dictionary type that stores elements in itself. 
    * It contains successive pairs (key, value), which allows fast retrieval of an individual element based on its unique key.
    * when you need faster average-time operations and don't require sorted keys.
    * Generally offers better performance than map due to its average time complexity
    */

    //! Unordered Map initializer
    unordered_map <int, string> num;

    //! Inserting:
    // Inserts the element with specified key. If does not exists, creates a new element and then provide value. This method always modify the map.
    num[1] = "One"; 

    // Inserts an key-value pair directly (dont replace existing keys, fail, if already exists)
    num.insert({6, "Six"});
    num.insert(make_pair(11, "Eleven"));
    num.insert(pair <int, string> (16, "Sixteen"));

    // More efficient than Insert, avoids creating temporary pairs 
    // (does not replace existing pairs and fail, if already exists)
    num.emplace(21, "Twenty one");
    num.emplace(make_pair(26, "Twenty Six"));
    num.emplace(pair <int, string> (31, "Thirty one"));

    // Insert another map
    unordered_map <int, string> anotherMap = {{4, "Four"}, {5, "Five"}};
    num.insert(anotherMap.begin(), anotherMap.end());

    
    //! Iterating: 
    // Iterating: Ranged Based For Loop
    cout << "Displaying Map (Ranged Based Loop): " << endl;
    for(auto &pair: num){
        cout << pair.first << " -> " << pair.second << endl;
    }
    cout << endl;

    // Iterating: Using Iterators
    cout << "Displaying Map (Using Iterator): " << endl;
    unordered_map <int, string> :: iterator it;
    for(auto it = num.begin(); it != num.end(); it++){
        cout << it->first << " -> " << it->second << endl;
    }
    cout << endl; 

    // Display the bucket number where key, value pair is located
    auto iter = num.begin();
    int number = num.bucket(iter->first);
    cout << "The bucket number of key " << iter->first << " is " << number << endl;
    cout << endl;

    // Count the no of buckets in the umap
    for(auto &x: num){
        cout << "(" << x.first << ", " << x.second << ")";
        cout << " is in bucket: " << num.bucket(x.first) << endl;
    }
    cout << endl;

    // Count the no of elements in each bucket
    int n = num.bucket_count();
    cout << "U-Map has " << n << " buckets." << endl;

    // Count the number of elements present in each bucket
    for(int i = 0; i < n; i++){
        cout << "Bucket: " << i << " has " << num.bucket_size(i) << " elements." << endl;
    }
    cout << endl;
    return 0;
}