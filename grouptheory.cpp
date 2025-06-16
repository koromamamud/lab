#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int>> Matrix;

// Function to multiply two 2x2 matrices
Matrix multiply(const Matrix &A, const Matrix &B) {
    Matrix result = {{0, 0}, {0, 0}};
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            for (int k = 0; k < 2; ++k)
                result[i][j] += A[i][k] * B[k][j];
    return result;
}

// Function to raise matrix A to the power n
Matrix matrixPower(const Matrix &A, int n) {
    Matrix result = {{1, 0}, {0, 1}}; // Identity matrix
    Matrix base = A;
    while (n > 0) {
        if (n % 2 == 1)
            result = multiply(result, base);
        base = multiply(base, base);
        n /= 2;
    }
    return result;
}

// Function to print a matrix
void printMatrix(const Matrix &M) {
    for (const auto &row : M) {
        for (int val : row)
            cout << val << " ";
        cout << endl;
    }
}

// Check if matrix is identity
bool isIdentity(const Matrix &M) {
    return M[0][0] == 1 && M[0][1] == 0 &&
           M[1][0] == 0 && M[1][1] == 1;
}

int main() {
    Matrix A = {{0, -1}, {1, 0}};
    Matrix identity = {{1, 0}, {0, 1}};

    cout << "Matrix A:\n";
    printMatrix(A);

    // Compute A^1, A^3, A^6, A^12 and display φ(A^k) = k % 4
    vector<int> exponents = {1, 3, 6, 12};
    cout << "\nMapped values φ(A^k) = k mod 4:\n";
    for (int k : exponents) {
        Matrix Ak = matrixPower(A, k);
        cout << "A^" << k << ":\n";
        printMatrix(Ak);
        cout << "φ(A^" << k << ") = " << (k % 4) << "\n\n";
    }

    return 0;
}