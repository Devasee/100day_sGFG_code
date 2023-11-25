//Missing Number

#include <vector>

class Solution {
public:
    int missingNumber(std::vector<int>& array, int n) {
        std::vector<bool> present(n + 1, false);
        for (int a : array) {
            // if (a >= 0 && a <= n) {
            present[a] = true;
        }

        for (int i = 0; i < n; i++) {
            if (!present[i]) {
                return i;
            }
        }

        return -1;
    }
};

// Example usage:
#include <iostream>

int main() {
    Solution solution;
    std::vector<int> exampleArray = {1, 0, 3};
    int n = 4; // Assuming the array should contain integers from 0 to n

    int missingNum = solution.missingNumber(exampleArray, n);

    std::cout << "Missing Number: " << missingNum << std::endl;

    return 0;
}
