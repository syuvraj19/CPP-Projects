#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;
    char choice;

    do {
        cout << "Enter operator (+, -, *, /): ";
        cin >> operation;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch(operation) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                if(num2 != 0)
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                else
                    cout << "Error! Division by zero." << endl;
                break;
            default:
                cout << "Error! Operator is not correct" << endl;
                break;
        }

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    return 0;
}
