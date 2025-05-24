/*simple calculator*/
#include <iostream>
using namespace std;
int main() {
    char operation;
    float num1, num2, result;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else
             {
                cout << "Error! Division by zero is not possible you stupid fellow." << endl;
                return 1; 
            }
            break;
        default:
            cout << "Error! Invalid operator." << endl;
            return 1;
        
    }

    cout << "Result: " << result << endl;

    return 0;
}