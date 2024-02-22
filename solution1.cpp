//assignment one solution------------------------
#include <iostream>
#include <vector>

int main() {
    const int rows = 5;
    const int columns = 5;

    // Create a 2D matrix with 5 rows and 5 columns, initialized with the value 10
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(columns, 10));

    // Display the matrix
    std::cout << "2D Matrix with 10 at every index:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
