#include <iostream>
using namespace std;

class Matrix {
private:
    int a[3][3];

public:
    Matrix() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                a[i][j] = 0;
            }
        }
    }

    Matrix operator+(const Matrix& next) const {
        Matrix result;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                result.a[i][j] = a[i][j] + next.a[i][j];
            }
        }
        return result;
    }

    void get(int row, int col, int num) {
        a[row][col] = num;
    }

    void show() const {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix OBJ1, OBJ2, OBJ3;

    cout << "Enter values for OBJ1 i.e. 3x3 matrix1:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int value;
            cout << "Enter value at position (" << i << "," << j << "): ";
            cin >> value;
            OBJ1.get(i, j, value);
        }
    }

    cout << "Enter values for OBJ2 i.e. 3x3 matrix2 :\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int value;
            cout << "Enter value at position (" << i << "," << j << "): ";
            cin >> value;
            OBJ2.get(i, j, value);
        }
    }

    OBJ3 = OBJ1 + OBJ2;

    cout << "Result of matrix addition i.e. OBJ1 + OBJ2:\n";
    OBJ3.show();

    return 0;
}

