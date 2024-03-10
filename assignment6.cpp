#include <iostream>
#include <cstdlib> 

using namespace std;

class sample {
public:
    int Compute(int (sample::*Func)(int), int n) {
        return (this->*Func)(n);
    }

    int findFactorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }

    int findSquare(int n) {
        return n * n;
    }

    int findCube(int n) {
        return n * n * n;
    }
};

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Usage: " << argv[0] << " <integer_value>" << endl;
        return 1;
    }

    sample obj;

    int N = std::atoi(argv[1]);

    int (sample::*factorialFunc)(int) = &sample::findFactorial;
    int resultFactorial = obj.Compute(factorialFunc, N);
    cout << "Factorial of " << N << ": " << resultFactorial << endl;

    int (sample::*squareFunc)(int) = &sample::findSquare;
    int resultSquare = obj.Compute(squareFunc, N);
    cout << "Square of " << N << ": " << resultSquare << endl;

    int (sample::*cubeFunc)(int) = &sample::findCube;
    int resultCube = obj.Compute(cubeFunc, N);
    cout << "Cube of " << N << ": " << resultCube << endl;

    return 0;
}

