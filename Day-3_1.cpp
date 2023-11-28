//Maximum of all subarrays of size k

#include <iostream>
#include <vector>
#include <deque>

using namespace std;

class Solution {
public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int *arr, int n, int k) {
        deque<int> q;
        vector<int> v;

        // Process the first window separately
        for (int i = 0; i < k; i++) {
            while (!q.empty() && arr[q.back()] <= arr[i]) {
                q.pop_back();
            }
            q.push_back(i);
        }

        // Process the remaining windows
        for (int i = k; i < n; i++) {
            v.push_back(arr[q.front()]);

            // Remove elements that are out of the current window
            while (!q.empty() && q.front() <= i - k) {
                q.pop_front();
            }

            // Remove smaller elements as they will not be the maximum
            while (!q.empty() && arr[q.back()] <= arr[i]) {
                q.pop_back();
            }

            q.push_back(i);
        }

        // Add the maximum of the last window
        v.push_back(arr[q.front()]);

        return v;
    }
};

int main() {
    Solution solution;

    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    vector<int> result = solution.max_of_subarrays(arr, n, k);

    // Display the result
    cout << "Maximum of each subarray of size " << k << " is: ";
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}
