#include <iostream>

// Function to display the middle row and middle column of a square matrix
void displayMiddleRowAndColumn(const int arr[][5], int size) {
    // Display the elements of the middle row
    int middleRow = size / 2;
    std::cout << "Middle Row:" << std::endl;
    for (int j = 0; j < size; ++j) {
        std::cout << arr[middleRow][j] << " ";
    }
    std::cout << std::endl;

    // Display the elements of the middle column
    int middleColumn = size / 2;
    std::cout << "Middle Column:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i][middleColumn] << std::endl;
    }
}

int main() {
    // Input matrix
    const int size = 5;
    int matrix[5][5] = {{1, 2, 3, 4, 5},
                        {3, 4, 5, 6, 7},
                        {7, 6, 5, 4, 3},
                        {8, 7, 6, 5, 4},
                        {1, 2, 37, 8, 0}};

    // Display the middle row and middle column
    displayMiddleRowAndColumn(matrix, size);

    return 0;
}
