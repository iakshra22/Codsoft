#include <iostream>
#include <cmath>
using namespace std;

long long factorial(int n) {
    if (n < 0) return -1; // invalid
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    double num1, num2;
    char op;
    char choice;

    cout << "   WELCOME TO CALCULATOR\n";
    cout << "=============================\n";

    do {
        cout << "\nChoose an operation:\n";
        cout << "+  Addition           l  Logarithm (base 10)\n";
        cout << "-  Subtraction        s  Sine\n";
        cout << "*  Multiplication     c  Cosine\n";
        cout << "/  Division           t  Tangent\n";
        cout << "%  Modulus            r  Square Root\n";
        cout << "^  Power              !  Factorial\n";

        cout << "Enter your choice: ";
        cin >> op;

        switch (op) {
            case '+':
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Your '+' operation result is: " << num1 + num2 << endl;
                break;

            case '-':
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Your '-' operation result is: " << num1 - num2 << endl;
                break;

            case '*':
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Your '*' operation result is: " << num1 * num2 << endl;
                break;

            case '/':
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0)
                    cout << "Your '/' operation result is: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;

            case '%':
                cout << "Enter two integers: ";
                cin >> num1 >> num2;
                if ((int)num2 != 0)
                    cout << "Your '%' operation result is: " << (int)num1 % (int)num2 << endl;
                else
                    cout << "Error: Modulus by zero!" << endl;
                break;

            case '^':
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Your '^' operation result is: " << pow(num1, num2) << endl;
                break;

            case 'r':
                cout << "Enter number: ";
                cin >> num1;
                if (num1 >= 0)
                    cout << "Your 'Square Root' operation result is: " << sqrt(num1) << endl;
                else
                    cout << "Error: Negative number!" << endl;
                break;

            case '!':
                cout << "Enter integer: ";
                cin >> num1;
                if ((int)num1 >= 0) {
                    cout << "Your 'Factorial' operation result is: " << factorial((int)num1) << endl;
                } else {
                    cout << "Error: Factorial of negative not possible!" << endl;
                }
                break;

            case 'l':
                cout << "Enter number: ";
                cin >> num1;
                if (num1 > 0)
                    cout << "Your 'Log base 10' operation result is: " << log10(num1) << endl;
                else
                    cout << "Error: Log undefined!" << endl;
                break;

            case 's':
                cout << "Enter angle in degrees: ";
                cin >> num1;
                cout << "Your 'Sine' operation result is: " << sin(num1 * M_PI / 180) << endl;
                break;

            case 'c':
                cout << "Enter angle in degrees: ";
                cin >> num1;
                cout << "Your 'Cosine' operation result is: " << cos(num1 * M_PI / 180) << endl;
                break;

            case 't':
                cout << "Enter angle in degrees: ";
                cin >> num1;
                cout << "Your 'Tangent' operation result is: " << tan(num1 * M_PI / 180) << endl;
                break;

            case 'e':
                cout << "Exiting Calculator... Goodbye!\n";
                return 0;

            default:
                cout << "Invalid choice! Try again.\n";
        }

        cout << "\nThank you!\n";
        cout << "Do you want to use the calculator again? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "\nGoodbye! Have a great day! ??\n";
    return 0;
}










