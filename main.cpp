#include <iostream>
#include "cmath"
int main() {
    using namespace std;
    while (true) {
        int n1;
        int n2;
        cout << "Enter a number or -1 to exit: ";
        cin >> n1;
        if (n1 == -1) {
            break;
        }
        cout << "Enter another number: ";
        cin >> n2;
        double pr = 1.0;
        for (int i = n1; i <= n2; i++) {
            pr *= 1 - (pow(-1, i - 1) / (3 * i - 1));
            cout << pr << endl;
        }
    }
}