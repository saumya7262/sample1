#include <iostream>
using namespace std;

class large_Unit; 

class smaller_Unit {
private:
    double inches;

public:
    smaller_Unit(double inches) : inches(inches) {}

    operator large_Unit(); 

    void display() const {
        cout << "Measurement in inches: " << inches << endl;
    }
};

class large_Unit {
private:
    double feet;

public:
    large_Unit(double feet) : feet(feet) {}

    void display() const {
        cout << "Measurement in feet: " << feet << endl;
    }
};

smaller_Unit::operator large_Unit() {
    return large_Unit(inches / 12.0);
}

int main() {
    smaller_Unit smallUnit_OBJ(24.0); 
    large_Unit largeUnit_OBJ = smallUnit_OBJ; 

    largeUnit_OBJ.display(); 
    smallUnit_OBJ.display(); 

    return 0;
}

