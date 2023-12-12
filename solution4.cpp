#include <iostream>
#include <climits>

int findLargestElement(const int arr[][4], int rows, int cols) {
    int maxElement = INT_MIN;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
            }
        }
    }

    return maxElement;
}

int main() {
    // Input 2D array
    const int rows = 4;
    const int cols = 4;
    int array[4][4] = {{1, 3, 4, 6},
                       {2, 4, 5, 7},
                       {3, 5, 6, 8},
                       {4, 6, 7, 9}};

    // Find the largest element
    int result = findLargestElement(array, rows, cols);

    // Display the result
    std::cout << "The largest element is: " << result << std::endl;

    return 0;
}
