//Wave Question

#include <iostream>
#include <vector>

using namespace std;

void convertToWave(int n, vector<int>& arr){
    for(int i = 1; i < n; i += 2) {
        swap(arr[i], arr[i-1]);
    }
    // If you want to return the modified array, uncomment the following line
    // return arr;
}

int main() {
    // Example usage of the function
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int n = arr.size();

    cout << "Original Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    convertToWave(n, arr);

    cout << "Wave Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
