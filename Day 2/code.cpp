#include<iostream>
using namespace std;

int main() {
    // Output introductory message
    cout << "DSA Series By Munawar" << endl;
    cout << "September 04, 2024" << endl;

    // Variable declarations and output
    int age = 24;
    cout << "Age: " << age << endl;
    cout << "Size of integer: " << sizeof(age) << " bytes" << endl;

    char grade = 'B';
    cout << "Grade: " << grade << endl;

    float pi = 3.14f;
    cout << "The value of PI: " << pi << endl;

    bool isTrue = true;
    cout << "Is True: " << isTrue << endl;

    double price = 100.99;
    cout << "Double: " << price << endl;

    // Type Casting
    char position = 'A';
    int asciiValue = position;
    cout << "ASCII value of position 'A': " << asciiValue << endl;

    int truncatedPrice = int(price);
    cout << "Truncated price: " << truncatedPrice << endl;

    // Operators in C++
    int num1 = 39;
    int num2 = 31;

    int sum = num1 + num2;
    int product = num1 * num2;
    int divisor = 5;
    double dividend = 2;
    float divisionResult = divisor / dividend;

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Division result: " << divisionResult << endl;

    // Relational operators
    cout << "Is 3 greater than 2? " << (3 > 2) << endl;  // false returns 0
    cout << "Is 5 greater than 2? " << (5 > 2) << endl;  // true returns 1

    // Logical operators
    cout << "Negation of (5 > 2): " << !(5 > 2) << endl;  // true returns 1 but negation returns 0
    cout << "Logical OR: " << ((3 < 2) || (5 > 2)) << endl;
    cout << "Logical AND: " << ((3 < 2) && (5 > 2)) << endl;

    // Sum of 2 numbers
    int number1 = 10;
    int number2 = 20;
    int totalSum = number1 + number2;
    cout << "The sum is: " << totalSum << endl;

    // Unary operators
    int value = 10;
    int postIncrementValue = value++;
    cout << "Value after post-increment: " << value << endl;
    cout << "Value before increment: " << postIncrementValue << endl;

    // Calculator
    int firstNumber, secondNumber;
    cout << "Enter the first number: ";
    cin >> firstNumber;
    cout << "Enter the second number: ";
    cin >> secondNumber;

    int additionResult = firstNumber + secondNumber;
    int multiplicationResult = firstNumber * secondNumber;
    int subtractionResult = firstNumber - secondNumber;
    float divisionResultCalc = static_cast<float>(firstNumber) / secondNumber;

    cout << "Addition result: " << additionResult << endl;
    cout << "Multiplication result: " << multiplicationResult << endl;
    cout << "Subtraction result: " << subtractionResult << endl;
    cout << "Division result: " << divisionResultCalc << endl;

    return 0;
}

