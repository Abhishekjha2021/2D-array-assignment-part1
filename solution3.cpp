#include <iostream>
#include <vector>

int sumRectangle(const std::vector<std::vector<int>>& matrix, int l1, int r1, int l2, int r2) {
    int rows = matrix.size();
    int columns = matrix[0].size();

    // Create a 2D prefix sum matrix
    std::vector<std::vector<int>> prefixSum(rows + 1, std::vector<int>(columns + 1, 0));

    // Calculate the prefix sum
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= columns; ++j) {
            prefixSum[i][j] = matrix[i - 1][j - 1] + prefixSum[i - 1][j] + prefixSum[i][j - 1] - prefixSum[i - 1][j - 1];
        }
    }

    // Calculate the sum of the rectangle
    int result = prefixSum[l2][r2] - prefixSum[l1 - 1][r2] - prefixSum[l2][r1 - 1] + prefixSum[l1 - 1][r1 - 1];

    return result;
}

int main() {
    // Input matrix
    std::vector<std::vector<int>> matrix = {{1, 2, -3, 4},
                                           {0, 0, -4, 2},
                                           {1, -1, 2, 3},
                                           {-4, -5, -7, 0}};

    // Input coordinates
    int l1 = 1, r1 = 2, l2 = 3, r2 = 3;

    // Calculate the sum of the rectangle
    int result = sumRectangle(matrix, l1, r1, l2, r2);

    // Display the result
    std::cout << "Sum of the rectangle: " << result << std::endl;

    return 0;
}
