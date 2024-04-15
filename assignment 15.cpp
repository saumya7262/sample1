#include <iostream>
using namespace std;
class ClassB;

class ClassA {
private:
    int num1;

public:
    ClassA(int n) : num1(n) {}

    friend int sum(ClassA obj1, ClassB obj2);
};

class ClassB {
private:
    int num2;

public:
    ClassB(int n) : num2(n) {}

    friend int sum(ClassA obj1, ClassB obj2);
};

int sum(ClassA obj1, ClassB obj2) {
    return obj1.num1 + obj2.num2;
}

int main() {
    ClassA obj1(10);
    ClassB obj2(20);

    cout << "Sum of private data members: " << sum(obj1, obj2) << endl;

    return 0;
}

