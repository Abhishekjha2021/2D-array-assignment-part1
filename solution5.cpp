#include <iostream>
#include <climits>

int findRowWithMaxSum(const int arr[][4], int rows, int cols) {
    int maxSum = INT_MIN;
    int maxSumRow = -1;

    for (int i = 0; i < rows; ++i) {
        int rowSum = 0;
        for (int j = 0; j < cols; ++j) {
            rowSum += arr[i][j];
        }

        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxSumRow = i + 1; // Adjust to 1-based index
        }
    }

    return maxSumRow;
}

int main() {
    // Input matrix
    const int rows = 3;
    const int cols = 4;
    int matrix[3][4] = {{1, 3, 5, 7},
                        {3, 4, 7, 8},
                        {1, 4, 12, 3}};

    // Find the row with the maximum sum
    int result = findRowWithMaxSum(matrix, rows, cols);

    // Display the result
    std::cout << "The row with the maximum sum is: " << result << std::endl;

    return 0;
}
