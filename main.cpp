#include <iostream>
#include <cmath>
#include "string"

using namespace std;

int main() {
    string answer;
    do{
        int n1;
        int n2;
        cout << "Enter a number: ";
        cin >> n1;
        cout << "Enter another number: ";
        cin >> n2;
        if (n1 > n2) {
            cout << "The first number must be less than the second number." << endl;
            continue;
        }
        double pr = 1.0;
        for (int i = n1; i <= n2; i++) {
            pr *= 1 - (pow(-1, i - 1) / (3 * i - 1));
            cout << pr << endl;
        }
        cout << "The product is: " << pr << endl;
        cout << "Do you want to continue? (y/n): ";
        cin >> answer;

        } while (answer == "y");
    }