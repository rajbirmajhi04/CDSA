#include <iostream>
#include <vector>
#include <array>
using namespace std;

// display subarrays
void SubArrays(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            for(int k = i; k <= j; k++){
                cout << arr[k];
            }
            cout << " ";
        }
        cout << endl;
    }
}

// maximum subarrays sum (brute force)
void MaxSubArraySum(int arr[], int size){
    int maxSum = INT_MIN;
    for(int i = 0; i < size; i++){
        int currSum = 0;
        for(int j = i; j < size; j++){
            currSum = currSum + arr[j];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Maximum Subarray Sum: " << maxSum << endl;
}

// maximum subarray sum using kadne's algorithm
void KadneAlgorithm(int arr[], int size){
    int maxSum = INT_MIN;
    int currSum = 0;
    int i = 0;

    while(i < size){
        currSum = currSum + arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
        i++;
    }
    cout << "Max Subarray Sum: " << maxSum << endl;
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(nums)/sizeof(nums[0]);

    SubArrays(nums, size);
    MaxSubArraySum(nums, size);
    KadneAlgorithm(nums, size);
    return 0;
}