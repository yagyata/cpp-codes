#include <iostream>

using namespace std;

int main(){
    char op;
    double num1, num2;

    cout<< "Enter the operator (+, -, *, /) : ";
    cin >> op;
    cout <<"Enter two numbers : ";
    cin >> num1 >> num2;
    
    int a = num1 + num2;
    int b = num1 - num2;
    int c = num1 * num2;
    int d = num1 / num2;

    switch ( op ){
        
        case '+':
            cout << num1 << "+" << num2 << " = " << a;
            break;

        case '-':
            cout << num1 << "-" << num2 << " = " << b;
            break;

        case '*':
            cout << num1 << "*" << num2 << " = " << c;
            break;

        case '/':
            if (num2 != 0.0)
                cout << num1 << "/" << num2 << " = " << d;
            else
                cout << "cannot be divided by zero" << endl;
            
            break; 

        default:
            cout << op << "is an invalid operator";

    }


    return 0;
}
