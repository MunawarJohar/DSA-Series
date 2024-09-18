#include<iostream>
using namespace std;

// Function to convert a decimal number to binary
int convertDecimalToBinary(int decimalNum) {
    int binaryNum = 0;      // Stores the final binary number
    int placeValue = 1;     // Keeps track of place value (units, tens, etc.) in the binary number

    // Loop to convert decimal to binary
    while(decimalNum > 0) {
        int remainder = decimalNum % 2;   // Get the remainder (0 or 1)
        decimalNum /= 2;                  // Divide the number by 2 to get the quotient

        // Add the remainder multiplied by its place value to form the binary number
        binaryNum += (remainder * placeValue);
        placeValue *= 10;                 // Move to the next place value (tens, hundreds, etc.)
    }
    return binaryNum;                     // Return the resulting binary number
}

// Function to convert a binary number to decimal
int convertBinaryToDecimal(int binaryNum) {
    int decimalNum = 0;     // Stores the final decimal number
    int placeValue = 1;     // Keeps track of the place value (1, 2, 4, 8, etc.) in binary

    // Loop to convert binary to decimal
    while(binaryNum > 0) {
        int lastDigit = binaryNum % 10;   // Get the last digit of the binary number
        decimalNum += (lastDigit * placeValue); // Add the binary digit multiplied by its place value to the decimal number
        binaryNum /= 10;                  // Remove the last digit of the binary number
        placeValue *= 2;                  // Move to the next place value (2, 4, 8, etc.)
    }
    return decimalNum;                    // Return the resulting decimal number
}

int main() {
    // Input decimal number for conversion to binary
    int decimalInput;
    cout << "\nEnter the decimal number: ";
    cin >> decimalInput;

    // Output the binary equivalent of the decimal number
    cout << "Binary equivalent: " << convertDecimalToBinary(decimalInput) << endl;

    // Input binary number for conversion to decimal
    int binaryInput;
    cout << "\nEnter the binary number: ";
    cin >> binaryInput;

    // Output the decimal equivalent of the binary number
    cout << "Decimal equivalent: " << convertBinaryToDecimal(binaryInput) << endl;

    return 0;
}

