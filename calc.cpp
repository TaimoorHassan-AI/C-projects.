#include <iostream>
using namespace std;

float add(float a, float b) {
    return a + b;
}


float subtract(float a, float b) {
    return a - b;
}


float multiply(float a, float b) {
    return a * b;
}


float divide(float a, float b) {
    return a / b;
}

int main() {

    float num1, num2;
    int choice;

    cout << "----- SIMPLE CALCULATOR -----" << endl;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Enter your choice: ";
    cin >> choice;
    
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
    
    if (choice==1){
    	cout<<"Result: "<<add(num1,num2);
	}
	else if (choice==2){
    	cout<<"Result: "<<subtract(num1,num2);
	}
	else if (choice==2){
    	cout<<"Result: "<<subtract(num1,num2);
    }
	else if (choice==3){
    	cout<<"Result: "<<multiply(num1,num2);
    }
    else if (choice == 4) {
        if (num2 == 0) {
            cout << "Cannot divide by zero!";
        }
    else {
            cout << "Result: " << divide(num1, num2);
        }
    }
    else {
    	cout<<"invalid character";
	}
	return 0;
}
    
