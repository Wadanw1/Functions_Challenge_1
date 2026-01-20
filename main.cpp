#include <iostream>
#include <cmath>

using namespace std;

// below is just showing these are here
double calculateArea(const double r);
double calculateArea(const double l, const double w);
double calculatePerimeter(const double r);
double calculatePerimeter(const double l, const double w);

int main() {
    int userChoice = 0;


    do { // here is the loop as part of the instructions
        cout << "--- Shape Calculator ---" << endl;
        cout << "1) Circle Area\n2) Circle Perimeter\n3) Rect Area\n4) Rect Perimeter\n5) Exit" << endl;
        cout << "Selection: ";
        cin >> userChoice;

        if (userChoice == 5) { // gone to if statements for how far it goes to
            cout << "Goodbye!" << endl;
            break;
        }

        double n1, n2;

        if (userChoice == 1) {
            cout << "Enter radius: ";
            cin >> n1;
            cout << "Result: " << calculateArea(n1) << endl;
        }
        else if (userChoice == 2) {
            cout << "Enter radius: ";
            cin >> n1;
            cout << "Result: " << calculatePerimeter(n1) << endl;
        }
        else if (userChoice == 3) {
            cout << "Enter length: "; cin >> n1;
            cout << "Enter width: "; cin >> n2;
            cout << "Result: " << calculateArea(n1, n2) << endl;
        }
        else if (userChoice == 4) {
            cout << "Enter length: "; cin >> n1;
            cout << "Enter width: "; cin >> n2;
            cout << "Result: " << calculatePerimeter(n1, n2) << endl;
        }
        else {
            cout << "Not a valid option, try again." << endl;
        }

    } while (userChoice != 5);

    return 0;
}


double calculateArea(const double r) { // after returning above starting function part
    return 3.14159 * r * r;
}

double calculateArea(const double l, const double w) {
    return l * w;
}

double calculatePerimeter(const double r) {
    return 2 * 3.14159 * r;
}

double calculatePerimeter(const double l, const double w) {
    return 2 * (l + w);
}