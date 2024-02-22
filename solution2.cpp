#include <iostream>
#include <vector>


void addMatrices(std::vector<std::vector<int>>& mat1, const std::vector<std::vector<int>>& mat2) {
    int rows = mat1.size();
    int columns = mat1[0].size();

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            mat1[i][j] += mat2[i][j];
        }
    }
}


void displayMatrix(const std::vector<std::vector<int>>& mat) {
    for (const auto& row : mat) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Input matrices
    std::vector<std::vector<int>> matrix1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::vector<std::vector<int>> matrix2 = {{4, 5, 8}, {0, 0, 8}, {1, 2, 0}};

    // Add matrices and save the result in the first matrix
    addMatrices(matrix1, matrix2);

    // Display the result
    std::cout << "Resultant Matrix:" << std::endl;
    displayMatrix(matrix1);

    return 0;
}
