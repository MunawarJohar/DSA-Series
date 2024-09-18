#include<iostream>
using namespace std;

// Function to check if a number is a power of 2
bool isPowerOfTwo(int num) {
    if (num <= 0) {
        return false;  // Negative numbers and 0 are not powers of 2
    }
    return (num & (num - 1)) == 0;  // True if the number is a power of 2
}

// Function to reverse an integer
int reverseInteger(int num) {
    int reversedNumber = 0;

    while (num != 0) {
        int lastDigit = num % 10;  // Get the last digit
        reversedNumber = reversedNumber * 10 + lastDigit;  // Append last digit
        num /= 10;  // Remove the last digit from the original number
    }

    return reversedNumber;
}

int main() {
    // Question 1: Check if a number is a power of 2
    int number;
    cout << "Enter a number to check if it's a power of 2: ";
    cin >> number;

    if (isPowerOfTwo(number)) {
        cout << number << " is a power of 2." << endl;
    } else {
        cout << number << " is not a power of 2." << endl;
    }

    // Question 2: Reverse an integer
    int reverseNum;
    cout << "Enter an integer to reverse: ";
    cin >> reverseNum;

    int reversed = reverseInteger(reverseNum);
    cout << "Reversed integer: " << reversed << endl;

    return 0;
}

