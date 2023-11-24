#include <iostream>
#include <algorithm> // Include this header for min and max functions

std::pair<long long, long long> getMinMax(long long a[], int n) {
    
    long long mini_prev = a[0], maxi_prev = a[0];
    for(int i = 0; i < n; i++)
    {
        mini_prev = std::min(mini_prev, a[i]);
        maxi_prev = std::max(maxi_prev, a[i]);
    }
    return {mini_prev, maxi_prev};
}

int main() {
    const int n = 5;
    long long arr[n] = {3, 1, 4, 1, 5};

    std::pair<long long, long long> result = getMinMax(arr, n);

    std::cout << "Minimum: " << result.first << std::endl;
    std::cout << "Maximum: " << result.second << std::endl;

    return 0;
}
