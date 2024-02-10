#include <iostream>
#include <cmath>
#include "string"
int main() {
    using namespace std;
    while (true) {
        int n1;
        int n2;
        string answer;
        cout << "Enter a number or: ";
        cin >> n1;
        cout << "Enter another number: ";
        cin >> n2;
        double pr = 1.0;
        for (int i = n1; i <= n2; i++) {
            pr *= 1 - (pow(-1, i - 1) / (3 * i - 1));
            cout << pr << endl;
        }
        cout << "The product is: " << pr << endl;
        cout << "Do you want to continue? (y/n): ";
        cin >> answer;
        if (answer == "n") {
            break;
        }
    }
}