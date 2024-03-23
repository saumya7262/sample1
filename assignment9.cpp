#include <iostream>
using namespace std;
class myclass {
private:
    int value;
public:
    myclass(int V) {
        value = V;
    }
	void display() {
        cout << value << endl;
    }
	int friend operator+(int v, myclass obj);
};
int operator+(int v, myclass obj) {
    return v + obj.value;
}
int main() {
    myclass obj1(324);
    myclass obj2 = 273 + obj1;
    cout << "Sum: ";
    obj2.display();
    return 0;
}

