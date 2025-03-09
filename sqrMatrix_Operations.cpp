// C++ Program for Square Matrix Operations
// Author: Ike Iloegbu

#include <iostream>
#include <vector>
using namespace std;

/**
 * Class representing a square matrix with various operations.
 */
class squareMatrix {
private:
    int matOrder; ///< Order of the square matrix
    vector<vector<double>> matrix; ///< 2D vector representing the matrix

public:
    /**
     * Constructor to initialize a square matrix of size n x n.
     * 
     * @param n Size of the square matrix.
     */
    squareMatrix(int n) : matOrder(n), matrix(n, vector<double>(n, 0.0)) {}

    /**
     * Retrieves the value of the matrix at a given row and column index.
     * 
     * @param row Row index.
     * @param col Column index.
     * @return The value at the given indices.
     * @throws out_of_range If indices are out of bounds.
     */
    double getValue(int row, int col) const {
        if (row >= 0 && row < matOrder && col >= 0 && col < matOrder) {
            return matrix[row][col];
        } else {
            throw out_of_range("Value out of range");
        }
    }

    /**
     * Sets an element in the matrix at the specified row and column index.
     * 
     * @param row Row index.
     * @param col Column index.
     * @param value Value to set at the specified indices.
     * @throws out_of_range If indices are out of bounds.
     */
    void setElement(int row, int col, double value) {
        if (row >= 0 && row < matOrder && col >= 0 && col < matOrder) {
            matrix[row][col] = value;
        } else {
            throw out_of_range("Value out of range");
        }
    }

    /**
     * Retrieves the diagonal values of the matrix.
     * 
     * @return A vector containing the diagonal values of the matrix.
     */
    vector<double> getDiagonalValues() const {
        vector<double> diagonal;
        for (int i = 0; i < matOrder; ++i) {
            diagonal.push_back(matrix[i][i]);
        }
        return diagonal;
    }

    /**
     * Displays the matrix in a structured format.
     */
    void showMatrix() const {
        cout << "Here is a display of your full matrix:" << endl;
        for (int i = 0; i < matOrder; ++i) {
            for (int j = 0; j < matOrder; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

/**
 * Main function to demonstrate matrix operations.
 * 
 * @return 0 upon successful execution.
 */
int main() {
    squareMatrix mat(3);
    
    // Setting values in the matrix
    mat.setElement(0, 0, 3);
    mat.setElement(0, 1, 5);
    mat.setElement(0, 2, 1);
    mat.setElement(1, 0, 3);
    mat.setElement(1, 1, 4);
    mat.setElement(1, 2, 1);
    mat.setElement(2, 0, 7);
    mat.setElement(2, 1, 9);
    mat.setElement(2, 2, 2);
    
    // Retrieving a value from the matrix
    cout << "The value at the given indices is " << mat.getValue(1, 1) << endl;
    
    // Displaying the diagonal values
    cout << "The diagonal values of the matrix are: ";
    for (double x : mat.getDiagonalValues()) {
        cout << x << " ";
    }
    cout << endl;
    
    // Displaying the entire matrix
    mat.showMatrix();
    
    return 0;
}
