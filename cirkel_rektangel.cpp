#include <iostream>

double calculateCirclePerimeter(double radius) {
    return 2 * M_PI * radius;
}

double calculateCircleArea(double radius) {
    return M_PI * radius * radius;
}

double calculateRectanglePerimeter(double length, double width) {
    return 2 * (length + width);
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

using namespace std;

int main() {
    int choice;
    cout << "Choose the figure you want to calculate:\n";
    cout << "1. Circle \n";
    cout << "2. Rectangle\n";
    cout << "Your choice: ";
    cin >> choice;

    if (choice == 1) {
        // Circle calculations
        int calculationChoice;
        double radius;

        cout << "Enter the radius of the circle: ";
        cin >> radius;

        cout << "What do you want to calculate?\n";
        cout << "1. Perimeter\n";
        cout << "2. Area\n";
        cout << "Your choice: ";
        cin >> calculationChoice;

        if (calculationChoice == 1) {
            double perimeter = calculateCirclePerimeter(radius);
            cout << "The perimeter of the circle is: " << perimeter << endl;
        } else if (calculationChoice == 2) {
            double area = calculateCircleArea(radius);
            cout << "The area of the circle is: " << area << endl;
        } else {
            cout << "Invalid choice." << endl;
        }

    } else if (choice == 2) {
        // Rectangle calculations
        int calculationChoice;
        double length, width;

        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;

        cout << "What do you want to calculate?\n";
        cout << "1. Perimeter\n";
        cout << "2. Area\n";
        cout << "Your choice: ";
        cin >> calculationChoice;

        if (calculationChoice == 1) {
            double perimeter = calculateRectanglePerimeter(length, width);
            cout << "The circumference of the rectangle is: " << perimeter << endl;
        } else if (calculationChoice == 2) {
            double area = calculateRectangleArea(length, width);
            cout << "The area of the rectangle is: " << area << endl;
        } else {
            cout << "Invalid choice." << endl;
        }

    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
