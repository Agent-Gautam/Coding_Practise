#include <iostream>
#include <vector>
#include <unordered_map>

int countSubarraysWithSum(const std::vector<int>& arr, int targetSum) {
    int count = 0; // Initialize the count of subarrays
    int currentSum = 0; // Initialize the current sum
    std::unordered_map<int, int> prefixSumCount; // Map to store prefix sums and their counts

    for (int i = 0; i < arr.size(); ++i) {
        currentSum += arr[i]; // Add the current element to the current sum

        // If the current sum is equal to the target sum, increment the count
        if (currentSum == targetSum) {
            count++;
        }

        // If there exists a prefix sum that makes the current sum - targetSum,
        // add the count of such prefix sums to the count
        if (prefixSumCount.find(currentSum - targetSum) != prefixSumCount.end()) {
            count += prefixSumCount[currentSum - targetSum];
        }

        // Increment the count of the current prefix sum in the map
        prefixSumCount[currentSum]++;
    }

    return count;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    int targetSum = 7;

    int result = countSubarraysWithSum(arr, targetSum);

    std::cout << "Number of subarrays with sum " << targetSum << ": " << result << std::endl;

    return 0;
}
