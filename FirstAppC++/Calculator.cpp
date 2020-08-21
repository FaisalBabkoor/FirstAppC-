//
//  Calculator.cpp
//  FirstAppC++
//
//  Created by Faisal Babkoor on 8/22/20.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    double num1, num2;
    char oper;
    //prompt user to enter first number
    cout << "Enter your first number: ";
    //assign the input variables to num1
    cin >> num1;
    
    cout << "Enter operator: ";
    cin >> oper;
    
    cout << "Enter your second number: ";
    cin >> num2;
    
    cout << endl;
    cout << num1 << " " << oper << " " << num2 << " = ";
    switch (oper) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 / num2 << endl;
            else
                cout << "Error";
            break;
        default:
            cout << "Something went wrong!";
            break;
    }
}
