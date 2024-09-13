#include<iostream>
using namespace std;

// Function to calculate the factorial of a number
int calculateFactorial(int num) {
    int factorial = 1;  // Initialize factorial as 1
    if (num < 0) {
        cout << "\n The number is less than Zero, factorial is undefined.";
        return factorial;
    } else if (num > 0) {
        for (int i = 1; i <= num; i++) {
            factorial = factorial * i;  // Calculate factorial by multiplying numbers from 1 to num
        }
        cout << "\n Factorial of " << num << " is: ";
        return factorial;
    }
}

// Function to calculate the binomial coefficient nCr
int calculateNCR(int n, int r) {
    int factorial_n = calculateFactorial(n);         // Calculate factorial of n
    int factorial_r = calculateFactorial(r);         // Calculate factorial of r
    int factorial_n_minus_r = calculateFactorial(n - r);  // Calculate factorial of (n-r)
    
    cout << "nCr is: ";
    return factorial_n / (factorial_r * factorial_n_minus_r);  // Formula for binomial coefficient
}

// Function to add two numbers and return the sum
int addNumbers(int num1, int num2) {
    cout << endl;
    return num1 + num2;  // Return the sum of two numbers
}

// Function to multiply a number by 2
int multiplyByTwo(int value) {    
    return 2 * value;
}

// Function to calculate the sum of digits of a number
int calculateDigitSum(int number) {
    int digitSum = 0;  // Initialize digit sum to 0
    while (number > 0) {
        int lastDigit = number % 10;  // Extract the last digit
        number /= 10;  // Remove the last digit from the number
        digitSum += lastDigit;  // Add the last digit to digitSum
    }
    cout << "\n Sum of digits: ";
    return digitSum;
}

int main() {
    // Factorial Calculation
    int factorialInput;
    cout << "\n Enter the number for Factorial: ";
    cin >> factorialInput;
    cout << calculateFactorial(factorialInput);  // Print the factorial of the input number

    // Sum of Digits Calculation
    int digitInput;
    cout << "\nEnter the number to calculate digit sum: ";
    cin >> digitInput;
    cout << calculateDigitSum(digitInput);  // Print the sum of digits of the input number

    // Example of calculating nCr (binomial coefficient)
    int n = 6, r = 3;
    cout << "\nnCr(" << n << ", " << r << ") = " << calculateNCR(n, r) << endl;  // Calculate and print nCr

    return 0;
}

