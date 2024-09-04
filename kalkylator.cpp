//
// Created by OlegMakeienko on 2024-09-04.
//

#include <iostream>
#include <cmath>

using namespace std;

// här skapas funktioner för addition, subtraktion, multiplikation och division
// som tar pekare till tal som argument

double add(double* a, double* b) {
    return *a + *b;
}

double subtract(double* a, double* b) {
    return *a - *b;
}

double multiply(double* a, double* b) {
    return *a * *b;
}

double divide(double* a, double* b) {
    if (*b != 0) {
        return *a / *b;
    } else {
        cout << "Error: Division by zero!" << endl;
        return NAN; // return NaN (Not a Number) om dividerar med noll
    }
}

// den funktionen är bara för att visa att vi kan använda <cmath>
double cosine(double* a) {
    return cos(*a);
}

int main() {
    double num1, num2;
    int choice;

    cout << "Choose an operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Cosine" << endl;

    cin >> choice;

    cout << "Enter number: ";
    cin >> num1;

    if (choice >= 1 && choice < 5) {
        cout << "Enter second number: ";
        cin >> num2;
    }

    double result;

    switch (choice) {
        case 1:
            result = add(&num1, &num2);
        break;
        case 2:
            result = subtract(&num1, &num2);
        break;
        case 3:
            result = multiply(&num1, &num2);
        break;
        case 4:
            result = divide(&num1, &num2);
        break;
        case 5:
            result = cosine(&num1);
        break;
        default:
            cout << "Invalid choice!" << endl;
        return 1;
    }

    cout << "The result is: " << result << endl;

    return 0;
}