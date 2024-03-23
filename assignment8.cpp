#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int temp = 0;
        for (int j = 1; j <= i; j++) {
            temp += j;
        }
        sum += temp;
    }
	cout << "Sum of series: " << sum << endl;
	return 0;
}

