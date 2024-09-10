#include <iostream>
#include <map>
using namespace std;
int main()
{

    /*
    ! Map(): 
    * Is used to store key-value pairs in a sorted order based on the keys and each key is unique
    * Values are accessed using keys rather than indexes
    * Implemented as Red-Black tree, this ensures that insertions, deletions and lookups have a time complexity of O(log n)
    * Use map when you need sorted keys and require ordered traversal.
    * Have logarithmic time complexity due to its tree structure
    */

    //! Map Initializer: 
    map <int , string> num;
    map <int, string> fruits;

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
    

    //! Iterating: 
    // Iterating: Ranged Based For Loop
    cout << "Displaying Map (Ranged Based Loop): " << endl;
    for(auto &pair: num){
        cout << pair.first << " -> " << pair.second << endl;
    }
    cout << endl;

    // Iterating: Using Iterators
    cout << "Displaying Map (Using Iterator): " << endl;
    map <int, string> :: iterator it;
    for(auto it = num.begin(); it != num.end(); it++){
        cout << it->first << " -> " << it->second << endl;
    }
    cout << endl;

    //! Finding:
    auto iter = num.find(6);
    if(iter != num.end()){
        cout << "Key: " << iter->first << endl;
        cout << "Found Value: " << iter->second << endl;
    }
    else {
        cout << "Value not Found!" << endl;
    }

    //! Checking existence:
    bool exists = num.count(6) > 0;
    if (exists)
    {
        cout << "Exists" << endl;
    }
    else {
        cout << "Does not exists!" << endl;
    }
    
    
    cout << "Map size: " << num.size() << endl;
    cout << "Map max size: " << num.max_size() << endl;
    cout << "Map empty? " << num.empty() << endl;

    //! Removing:
    num.erase(1); // remove single element with key
    num.erase(num.find(2)); // remove single element using iterator

    //! Clearing:
    num.clear(); // removes all elements
    cout << endl;

    //! Deleting a range of elemnts: 
    cout << "Initial Map: " << endl;
    for(auto &pair: num){
        cout << pair.first << " -> " << pair.second << endl;
    }
    cout << endl;

    //* Note: Ending element is not removed
    num.erase(num.find(6), num.find(16));

    cout << "Modified Map: " << endl;
    for(auto &pair: num){
        cout << pair.first << " -> " << pair.second << endl;
    }
    cout << endl;

    //! Taking a range of inputs and storing them in the frutis map
    int n;
    cout << "Enter number of inputs: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        int key;
        string value;

        cout << "Enter Number: ";
        cin >> key;

        cout << "Enter Fruit: ";
        cin >> value;

        cout << endl;

        fruits[key] = value;
    }

    cout << "Fruits Map: " << endl;
    for(auto &pair: fruits){
        cout << pair.first << " -> " << pair.second << endl;
    }
    cout << endl;

    

    


    

    
    







    




















    return 0;
}