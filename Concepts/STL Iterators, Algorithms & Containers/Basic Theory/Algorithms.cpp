#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main()
{

    /*
    ! Non Manipulating Algorithms: 
    * sort(): to sort in ascending order
    * sort(first_iterator, last_iterator, greater <datatype> ()): to sort in descending order
    * reverse()
    * *max_element()
    * *min_element()
    * accumulate(): summation of vector elements
    * count(): to count the occurences of x in vector
    * find(): returns an iterator to the first occurence of x in container and points to last address of container
    * binary_search(): test whether x exists in sorted container or not
    * lower_bound(): returns an iterator pointing to the first element in the range which has a value not less than x
    * upper_bound(): returns an iterator pointing o the first element in the range which has a value greater than x
    * equal(): checks if two ranges are equal
    * search(): Searches for a subsequence within a range
    * mismatch():  Compares two ranges and finds the first position where the elements differ
    * adjacent_find(): Finds the first occurrence of two consecutive identical elements
    */

    /*
    ! Manipulating Algorithms:
    * copy(): copies elements from one range to another
    * transform(): modifies each element by applying the function and stores the results
    * fill(): assigns a specified value to all elements in a range
    * replace(): replaces all occurences of a specified value in a range with a new value
    * remove()/remove_if(): removes elements from a range based on a value or a condition
    * unique(): removes consecutive duplicate elements in a range
    * rotate(): rotates elements in a range such that a specified element becomes the first element
    * partition()/stable_partition(): rearranges elements in a range so that elements satisfying a condition come before those that don't
    * merge(): merges two sorted ranegs into one sorted range
    * inplace_merge(): merges two consecutive sorted sub-ranges within a single range
    * nth_element(): partially sort the range so that the nth element is in its correct position
    * random_shuffle()/shuffle(): randomly shuffle elements in a range
    */

    int size;
    cout << "Enter vector size: ";
    cin >> size;

    int value;
    cout << "Enter a number: ";
    cin >> value;

    vector <int> vec1(size);
    vector <int> :: iterator it = vec1.begin();

    while(it != vec1.end()){
        *it = (value * 9);
        value ++;
        it ++;
    }
    cout << endl;

    cout << "Displaying Vector: " << endl;
    for(it = vec1.begin(); it != vec1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
   
    // sorting
    sort(vec1.begin(), vec1.end()); // ascending
    cout << "Ascending sorting: " << endl;
    for(it = vec1.begin(); it != vec1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    sort(vec1.begin(), vec1.end(), greater <int> ()); // descending
    cout << "Descending sorting: " << endl;
    for(it = vec1.begin(); it != vec1.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}