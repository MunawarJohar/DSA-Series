#include<iostream>
using namespace std;

// Function to print "Hello" multiple times
void printHello() {
    cout << "Hello\n";
}

// Function that prints a message and returns the value 5
int returnFive() {
    cout << "Return value: ";
    return 5;
}

// Function to calculate the sum of two numbers
int calculateSum(int num1, int num2) {
    int sum = num1 + num2;  // Add the two numbers
    return sum;
}

// Function to find the minimum of two numbers
int findMinimum(int num1, int num2) {
    if (num1 < num2) {
        cout << "\n" << num1 << " is the minimum.";
        return num1;
    } else if (num2 < num1) {
        cout << "\n" << num2 << " is the minimum.";
        return num2;
    } else {
        cout << "Error: Both numbers are equal.";
        return -1;  // Indicating an error when both numbers are equal
    }
}

// Function to calculate the sum of numbers from 1 to n
int sumUpToN(int n) {
    int totalSum = 0;  // Initialize sum to 0
    for (int i = 1; i <= n; i++) {
        totalSum = totalSum + i;  // Add each number to totalSum
    }
    cout << "\nThe sum of numbers from 1 to " << n << " is: ";
    return totalSum;
}

int main() {
    // Call printHello function multiple times
    printHello();
    printHello();
    
    // Call returnFive function and display the returned value
    cout << returnFive() << endl;

    // Define two numbers and calculate their sum using calculateSum function
    int num1 = 10, num2 = 20;
    cout << "\nThe sum of " << num1 << " and " << num2 << " is: " << calculateSum(num1, num2);

    // Call findMinimum function to find and display the minimum of num1 and num2
    cout << findMinimum(num1, num2);

    // Calculate the sum of numbers from 1 to a user-provided number
    int number;
    cout << "\nEnter the number for sum calculation: ";
    cin >> number;
    cout << sumUpToN(number);

    return 0;
}

