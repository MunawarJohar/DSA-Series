#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;  // Numbers 1 and below are not prime
    
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return false;  // If divisible by any number other than 1 and itself, not prime
    }
    return true;  // It's a prime number
}

// Function to print all prime numbers from 2 to N
void printPrimes(int N) {
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " ";  // Print prime numbers
        }
    }
    cout << endl;
}

// Function to return the nth Fibonacci number
int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive Fibonacci calculation
}

int main() {
    int choice;
    cout << "Select the operation you want to perform:\n";
    cout << "1. Check if a number is prime\n";
    cout << "2. Print all prime numbers from 2 to N\n";
    cout << "3. Print the nth Fibonacci number\n";
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;
    
    switch (choice) {
        case 1: {
            int num;
            cout << "Enter a number to check if it's prime: ";
            cin >> num;
            if (isPrime(num))
                cout << num << " is a prime number." << endl;
            else
                cout << num << " is not a prime number." << endl;
            break;
        }
        case 2: {
            int N;
            cout << "Enter the value of N to print all prime numbers from 2 to N: ";
            cin >> N;
            cout << "Prime numbers from 2 to " << N << ": ";
            printPrimes(N);
            break;
        }
        case 3: {
            int n;
            cout << "Enter the value of n to find the nth Fibonacci number: ";
            cin >> n;
            cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}

