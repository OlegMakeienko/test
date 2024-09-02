#include <iostream>
using namespace std;

// double calculateCirclePerimeter(double radius) {
//     return 2 * M_PI * radius;
// }
//
// double calculateCircleArea(double radius) {
//     return M_PI * radius * radius;
// }
//
// double calculateRectanglePerimeter(double length, double width) {
//     return 2 * (length + width);
// }
//
// double calculateRectangleArea(double length, double width) {
//     return length * width;
// }
//
// int main() {
//     int choice;
//     cout << "Choose the figure you want to calculate:\n";
//     cout << "1. Circle \n";
//     cout << "2. Rectangle\n";
//     cout << "Your choice: ";
//     cin >> choice;
//
//     if (choice == 1) {
//         // Circle calculations
//         int calculationChoice;
//         double radius;
//
//         cout << "Enter the radius of the circle: ";
//         cin >> radius;
//
//         cout << "What do you want to calculate?\n";
//         cout << "1. Perimeter\n";
//         cout << "2. Area\n";
//         cout << "Your choice: ";
//         cin >> calculationChoice;
//
//         if (calculationChoice == 1) {
//             double perimeter = calculateCirclePerimeter(radius);
//             cout << "The perimeter of the circle is: " << perimeter << endl;
//         } else if (calculationChoice == 2) {
//             double area = calculateCircleArea(radius);
//             cout << "The area of the circle is: " << area << endl;
//         } else {
//             cout << "Invalid choice." << endl;
//         }
//
//     } else if (choice == 2) {
//         // Rectangle calculations
//         int calculationChoice;
//         double length, width;
//
//         cout << "Enter the length of the rectangle: ";
//         cin >> length;
//         cout << "Enter the width of the rectangle: ";
//         cin >> width;
//
//         cout << "What do you want to calculate?\n";
//         cout << "1. Perimeter\n";
//         cout << "2. Area\n";
//         cout << "Your choice: ";
//         cin >> calculationChoice;
//
//         if (calculationChoice == 1) {
//             double perimeter = calculateRectanglePerimeter(length, width);
//             cout << "The circumference of the rectangle is: " << perimeter << endl;
//         } else if (calculationChoice == 2) {
//             double area = calculateRectangleArea(length, width);
//             cout << "The area of the rectangle is: " << area << endl;
//         } else {
//             cout << "Invalid choice." << endl;
//         }
//
//     } else {
//         cout << "Invalid choice." << endl;
//     }
//
//     return 0;
// }
//__________________________________

int main() {  //Diamanten
    int width;

    cout << "Enter the width of the diamond: ";
    cin >> width;

    if (width % 2 == 0) {
        cout << "Please enter an odd number for width." << endl;
        return 1;
    }

    int mid = width / 2;

    // Vi skriver ut övre halvan med mitten
    for (int i = 0; i <= mid; ++i) {
        for (int j = 0; j < mid - i; ++j)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; ++j)
            cout << "*";
        cout << endl;
    }

    // Nedre halvan
    for (int i = mid - 1; i >= 0; --i) {
        for (int j = 0; j < mid - i; ++j)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; ++j)
            cout << "*";
        cout << endl;
    }

    return 0;
}

