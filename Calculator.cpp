#include <iostream>
#include <cmath> // For pow() and sqrt()

using namespace std;

double num1, num2, result;

void addition();
void subtraction();
void multiplication();
void division();
void power();
void mod();

int main() {
    int op;
    
    cout << "\n~~~~~~ WELCOME TO THE CALCULATOR ~~~~~~" << endl;
    do {
        cout << "\n=====================================\n";
        cout << "\n**** MENU ****\n" << endl;
        cout << "1-Addition" << endl;
        cout << "2-Subtraction" << endl;
        cout << "3-Multiplication" << endl;
        cout << "4-Division" << endl;
        cout << "5-Power" << endl;
        cout << "6-Mod" << endl;
        cout << "7-Exit" << endl;
        cout << "\nPlease enter your choice: ";
        cin >> op;
        
        switch(op) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                power();
                break;
            case 6:
                mod();
                break;
            case 7:
                cout << "\n\nExiting the calculator..." << endl;
                exit(0);
            default:
                cout << "\nInvalid choice!" << endl;    
        }
    } while(1);
}

void addition() {
    cout << "\n\nEnter the numbers to add: ";
    cin >> num1 >> num2;
    
    result = num1 + num2;
    
    cout << endl << num1 << " + " << num2 << " = " << result << endl;
}

void subtraction() {
    cout << "\n\nEnter the numbers to subtract: ";
    cin >> num1 >> num2;
    
    result = num1 - num2;
    
    cout << endl << num1 << " - " << num2 << " = " << result << endl;
}

void multiplication() {
    cout << "\n\nEnter the numbers to multiply: ";
    cin >> num1 >> num2;
    
    result = num1 * num2;
    
    cout << endl << num1 << " * " << num2 << " = " << result << endl;
}

void division() {
    cout << "\n\nEnter the numbers to divide: ";
    cin >> num1 >> num2;
    
    if(num2 == 0) {
        cout << "\nCannot divide by 0" << endl;
    } else {
        result = num1 / num2;
        cout << endl << num1 << " / " << num2 << " = " << result << endl;
    }
}

void power() {
    cout << "\n\nEnter the base number: ";
    cin >> num1;
    cout << "Enter the exponent: ";
    cin >> num2;
    
    result = pow(num1, num2);
    
    cout << endl << num1 << " ^ " << num2 << " = " << result << endl;
}

void mod() {
    int int_num1, int_num2;
    cout << "\n\nEnter the number to find modulus: ";
    cin >> int_num1;
    cout << "Enter the modulus value: ";
    cin >> int_num2;
    
    if(int_num2 == 0) {
        cout << "\nCannot divide by 0" << endl;
    } else {
        result =int_num1-((int_num1/int_num2)*int_num2);
        cout << endl << int_num1 << " % " << int_num2 << " = " << result << endl;
    }
}

