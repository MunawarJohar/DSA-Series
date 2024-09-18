#include<iostream>
using namespace std;

// Global variable
int globalVar = 10;

int main() {

    // Variable initialization
    int num1 = 4;  // First number for bitwise operations
    int num2 = 8;  // Second number for bitwise operations

    // Performing Bitwise AND operation
    cout << "Bitwise AND (&) of " << num1 << " and " << num2 << " : " << (num1 & num2) << endl;
    
    // Performing Bitwise OR operation
    cout << "Bitwise OR (|) of " << num1 << " and " << num2 << " : " << (num1 | num2) << endl;
    
    // Performing Bitwise XOR operation
    cout << "Bitwise XOR (^) of " << num1 << " and " << num2 << " : " << (num1 ^ num2) << endl;
    
    // Performing Bitwise Left Shift operation
    cout << "Bitwise Left Shift (<<) of " << num1 << " by " << num2 << " positions: " << (num1 << num2) << endl;
    
    // Performing Bitwise Right Shift operation on 8 by 2 positions
    cout << "Bitwise Right Shift (>>) of 8 by 2 positions: " << (8 >> 2) << endl;

    // Operator Precedence demonstration
    cout << "Operator Precedence: " << endl;
    cout << "Precedence result of 5 * 3 / 2 is : " << (5 * 3 / 2) << endl;

    // Variable scope demonstration
    if (4 > 1) {
        int localVar = 44;  // Local variable inside if block
        // cout << "Not accessible outside if block: " << localVar << endl; // Uncomment to show it won't work
    }

    // Accessing global variable inside a block
    if (globalVar > 1) {
        cout << "Global variable is accessible. Value of globalVar: " << globalVar << endl;
    }

    // Demonstrating data type sizes
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of long int: " << sizeof(long int) << " bytes" << endl;
    cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
    cout << "Size of signed int: " << sizeof(signed int) << " bytes" << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes" << endl;

    return 0;
}

