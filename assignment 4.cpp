#include<iostream>
using namespace std;

class Computation {

private:
    int x, y;

public:

    int compute(int x, int y) {
        return x + y;
    }

    float compute(int x, float y) {
        return x + y;
    }

    double compute(int x, double y) {
        return x + y;
    }

    int compute(char x, char y) {
        return x + y;
    }

    int compute(char x, int y) {
        return x + y;
    }

    int compute() {
        return 0;
    }

};

int main() {
    Computation obj;

    cout << "Value of two integer parameters is: " << obj.compute(2, 3) << endl << endl;

    cout << "Value of one integer and one float parameter is: " << obj.compute(2, 3.4f) << endl << endl;

    cout << "Value of one integer and one double parameter: " << obj.compute(5, 1.3254) << endl << endl;

    cout << "Value of character parameters (ASCII value addition): " << obj.compute('2', '3') << endl << endl;

    cout << "Value of one character parameter and one integer parameter: " << obj.compute('5', 6) << endl << endl;

    cout << "Result of the default compute function: " << obj.compute();

    return 0;
}
