#include<iostream>
using namespace std;

int main() {

    // Square Pattern
    int square_size;
    cout << "Enter the size for the square pattern: ";
    cin >> square_size;
    for (int row = 1; row <= square_size; row++) {
        for (int col = 1; col <= square_size; col++) {
            cout << col << " "; // Display column number
        }
        cout << endl;
    }

    // Alphabet Pattern (A, B, C, ...)
    int alphabet_size;
    cout << "Enter a number between 1 to 26 for alphabet pattern: ";
    cin >> alphabet_size;
    for (int row = 1; row <= alphabet_size; row++) {
        char ch = 'A';
        for (int col = 0; col < alphabet_size; col++) {
            cout << ch << " "; // Display characters starting from A
            ch++;
        }
        cout << endl;
    }

    // Number Pattern
    int number_pattern_size;
    cout << "Enter the size for the number pattern: ";
    cin >> number_pattern_size;
    int num = 1;
    for (int row = 1; row <= number_pattern_size; row++) {
        for (int col = 1; col <= number_pattern_size; col++) {
            cout << num << " "; // Display numbers in increasing order
            num++;
        }
        cout << endl;
    }

    // Star Triangle Pattern
    int triangle_size;
    cout << "Enter the number for star triangle pattern: ";
    cin >> triangle_size;
    for (int row = 1; row <= triangle_size; row++) {
        for (int col = 1; col <= row; col++) {
            cout << "* "; // Print stars
        }
        cout << endl;
    }

    // Number Triangle Pattern
    int number_triangle;
    cout << "Enter the number for number triangle pattern: ";
    cin >> number_triangle;
    for (int row = 1; row <= number_triangle; row++) {
        for (int col = 1; col <= row; col++) {
            cout << row << " "; // Print the row number
        }
        cout << endl;
    }

    // Character Triangle Pattern
    int char_triangle_size;
    cout << "Enter a number between 1 to 26 for character triangle pattern: ";
    cin >> char_triangle_size;
    for (int row = 1; row <= char_triangle_size; row++) {
        char ch = 'A';
        for (int col = 1; col <= row; col++) {
            cout << ch << " "; // Print characters
            ch++;
        }
        cout << endl;
    }

    // Incremental Number Triangle Pattern
    int incremental_triangle;
    cout << "Enter the number for incremental triangle pattern: ";
    cin >> incremental_triangle;
    for (int row = 1; row <= incremental_triangle; row++) {
        int num = 1;
        for (int col = 1; col <= row; col++) {
            cout << num << " "; // Print numbers starting from 1
            num++;
        }
        cout << endl;
    }

    // Reverse Triangle Number Pattern
    int reverse_triangle_size;
    cout << "Enter the number for reverse triangle pattern: ";
    cin >> reverse_triangle_size;
    for (int row = 1; row <= reverse_triangle_size; row++) {
        for (int col = row; col >= 1; col--) {
            cout << col << " "; // Print numbers in reverse order
        }
        cout << endl;
    }

    // Floyd's Triangle Pattern (Numbers)
    int floyd_size;
    cout << "Enter the number for Floyd's triangle: ";
    cin >> floyd_size;
    int floyd_num = 1;
    for (int row = 1; row <= floyd_size; row++) {
        for (int col = 1; col <= row; col++) {
            cout << floyd_num << " "; // Print incremental numbers
            floyd_num++;
        }
        cout << endl;
    }

    // Floyd's Triangle Pattern (Characters)
    int floyd_char_size;
    cout << "Enter the number between 1 to 26 for Floyd's character triangle: ";
    cin >> floyd_char_size;
    char floyd_char = 'A';
    for (int row = 1; row <= floyd_char_size; row++) {
        for (int col = 1; col <= row; col++) {
            cout << floyd_char << " "; // Print incremental characters
            floyd_char++;
        }
        cout << endl;
    }

    // Inverted Triangle Pattern
    int inverted_triangle;
    cout << "Enter the number for inverted triangle: ";
    cin >> inverted_triangle;
    for (int row = 1; row <= inverted_triangle; row++) {
        for (int space = 1; space <= row; space++) {
            cout << " "; // Print leading spaces
        }
        for (int col = inverted_triangle; col >= row; col--) {
            cout << row; // Print row number
        }
        cout << endl;
    }

    // Inverted Character Triangle Pattern
    int inverted_char_triangle;
    cout << "Enter the number between 1 to 26 for inverted character triangle: ";
    cin >> inverted_char_triangle;
    char char_temp = 'A';
    for (int row = 1; row <= inverted_char_triangle; row++) {
        for (int space = 1; space <= row; space++) {
            cout << " "; // Print leading spaces
        }
        for (int col = inverted_char_triangle; col >= row; col--) {
            cout << char_temp; // Print characters
            char_temp++;
        }
        cout << endl;
    }

    // Pyramid Pattern
    int pyramid_size;
    cout << "Enter the number for pyramid pattern: ";
    cin >> pyramid_size;
    for (int row = 0; row < pyramid_size; row++) {
        for (int space = 0; space < pyramid_size - row - 1; space++) {
            cout << " "; // Print leading spaces
        }
        for (int num = 1; num <= row + 1; num++) {
            cout << num; // Print numbers in ascending order
        }
        for (int num = row; num > 0; num--) {
            cout << num; // Print numbers in descending order
        }
        cout << endl;
    }

    // Hollow Diamond Pattern
    int hollow_size;
    cout << "Enter the number for hollow diamond pattern: ";
    cin >> hollow_size;
    // Upper part of the hollow diamond
    for (int row = 0; row < hollow_size; row++) {
        for (int space = 0; space < hollow_size - row - 1; space++) {
            cout << " ";
        }
        cout << "*";
        if (row != 0) {
            for (int space = 0; space < 2 * row - 1; space++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    // Lower part of the hollow diamond
    for (int row = hollow_size - 2; row >= 0; row--) {
        for (int space = 0; space < hollow_size - row - 1; space++) {
            cout << " ";
        }
        cout << "*";
        if (row != 0) {
            for (int space = 0; space < 2 * row - 1; space++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // Butterfly Pattern
    int butterfly_size;
    cout << "Enter the size for butterfly pattern: ";
    cin >> butterfly_size;
    // Upper part of the butterfly
    for (int row = 1; row <= butterfly_size; row++) {
        for (int col = 1; col <= row; col++) {
            cout << "*"; // Print stars
        }
        for (int space = 1; space <= 2 * (butterfly_size - row); space++) {
            cout << " "; // Print middle spaces
        }
        for (int col = 1; col <= row; col++) {
            cout << "*"; // Print stars
        }
        cout << endl;
    }
    // Lower part of the butterfly
    for (int row = butterfly_size; row >= 1; row--) {
        for (int col = 1; col <= row; col++) {
            cout << "*"; // Print stars
        }
        for (int space = 1; space <= 2 * (butterfly_size - row); space++) {
            cout << " "; // Print middle spaces
        }
        for (int col = 1; col <= row; col++) {
            cout << "*"; // Print stars
        }
        cout << endl;
    }

    return 0;
}

