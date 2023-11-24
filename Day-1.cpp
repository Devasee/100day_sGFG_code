#include <iostream>

int search(int arr[], int N, int X)
{
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == X)
        {
            return i;
        }
    }

    // If the element is not found, return -1
    return -1;
}

int main()
{
    const int N = 5;
    int arr[N] = {1, 2, 3, 4, 5};
    int X;

    // Get the element to search for
    std::cout << "Enter the element to search for: ";
    std::cin >> X;

    // Call the search function
    int result = search(arr, N, X);

    // Check the result and display appropriate message
    if (result != -1)
    {
        std::cout << "Element found at index: " << result << std::endl;
    }
    else
    {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
