#include <algorithm>
#include <iostream>
#include <vector>
#include <array>
using namespace std;

// to display all the subarrays of an array
void SubArrays(int nums[], int size){
    cout << "Subarrays: " << endl;
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            for(int k = i; k <= j; k++){
                cout << nums[k];
            }
            cout << " ";
        }
        cout << endl;
    }
}

// maximum subaray sum (brute force method): O(n^3)
void MaxSubArraySum(int nums[], int size){
    int maxSum = INT_MIN;
    for(int i = 0; i < size; i++){
        int currentSum = 0;
        for(int j = i; j < size; j++){
            currentSum = currentSum + nums[j];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout << "Maximum Subarray Sum: " << maxSum << endl;
}

// max subarray sum (kadane's algorithm): O(n)
void KadaneAlgorithm(int nums[], int size){
    int maxSum = INT_MIN;
    int currentSum = 0;
    int i = 0;
    
    while(i < size){
        currentSum += nums[i];
        maxSum = max(currentSum, maxSum);
        if(currentSum < 0){
            currentSum = 0;
        }
        i++;
    }
    cout << "Kadane's Algo: " << maxSum << endl;
}

// Pair Sum: (Brute Force): O(n^2)
vector <int> PairSum(vector <int> vec, int size, int target){
    vector <int> result;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(vec[i] + vec[j] == target){
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return result;
}

// Pair Sum: (Optimised): O(n)
vector <int> PairSumOpt(vector <int> vec, int size, int target){
    vector <int> result;
    int i = 0, j = size - 1;

    while(i < j){
        int pairSum = vec[i] + vec[j];
        if(pairSum < target){
            i++;
        }
        else if(pairSum > target){
            j--;
        }
        else{
            result.push_back(i);
            result.push_back(j);
            return result;
        }
    }
    return result;
}

// majority element
int majorityElement(vector <int>& nums){
    int n = nums.size();

    for(int i = 0; i < n; i++){
        int count = 0;

        for(int j = 0; j < n; j++){
            if(nums[j] == nums[i]){
                count++;
            }
        }

        if(count > (n/2)){
            return nums[i];
        }
    }

    throw invalid_argument("Majority element not found!");
}

// majority element optimized
int majorityElementOpt(vector <int>& nums){
    int n = nums.size();
    sort(nums.begin(), nums.end());
    return nums[nums.size() / 2];
    throw invalid_argument("Majority element not found!");
}

// Moore's Voting Algorithm
int MooreAlgorithm(vector <int>& nums){
    int n = nums.size();
    int freq = 0, ans = 0;

    for(int i = 0; i < n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
    throw invalid_argument("Majority element not found!");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    SubArrays(arr, size);
    MaxSubArraySum(arr, size);
    KadaneAlgorithm(arr, size);

    vector <int> vec1 = {6, 1, 5, 2, 7, 3, 4, 9, 8};
    int s = vec1.size();
    int target = 15;

    vector <int> ps = PairSum(vec1, s, target);
    vector <int> ps1 = PairSumOpt(vec1, s, target);
    cout << "(" << ps[0] << ", " << ps[1] << ")" << endl;
    cout << "(" << ps1[0] << ", " << ps1[1] << ")" << endl;

    vector <int> nums = {2, 2, 1, 1, 1, 2, 2};
    try{
        cout << "Majority Element: " << majorityElement(nums) << endl;
        cout << "Majority Element Optimized: " << majorityElementOpt(nums) << endl;
        cout << "Moore's Algorithm: " << MooreAlgorithm(nums) << endl;
    }catch (invalid_argument& e){
        cout << e.what() << endl;
        cout << e.what() << endl;
        cout << e.what() << endl;
    }
    return 0;
}