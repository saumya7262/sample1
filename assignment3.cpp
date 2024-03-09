#include <iostream>
using namespace std;

class computation {
private:
    // Add private members here if necessary

public:
    // Method 1: Perform calculation on two integer parameters and return the result
    int compute(int x, int y) {
        return x + y;
    }

    // Method 2: Perform calculation on one integer and one float parameter and return the result
    float compute(int x, float y) {
        return x + y;
    }

    // Method 3: Perform calculation on one integer and one double parameter and return the result
    double compute(int x, double y) {
        return x + y;
    }

    // Method 4: Perform calculation on character parameters and return the result (ASCII values addition)
    int compute(char x, char y) {
        return static_cast<int>(x) + static_cast<int>(y);
    }

    // Method 5: Perform calculation on one character and one integer parameter and return the result
    int compute(char x, int y) {
        return static_cast<int>(x) + y;
    }

    // Method 6: Perform calculation even if no value is provided to a compute method, then return the result
    int compute() {
        return 0; // Default value when no parameters are provided
    }
};

int main() {
    // You can test the class methods here if needed

    return 0;
}

