#include<iostream>
#include<vector>
using namespace std;

// Linear search function
int linearSearch(vector<int>& vec, int target) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == target) {
            return i;  // Return the index if found
        }
    }
    return -1;  // Return -1 if not found
}

// Function to reverse a vector
void reverseVector(vector<int>& vec) {
    int start = 0;
    int end = vec.size() - 1;
    
    while (start < end) {
        // Swap the elements
        int temp = vec[start];
        vec[start] = vec[end];
        vec[end] = temp;
        
        // Move pointers towards the center
        start++;
        end--;
    }
}

int main() {
    // Example vector for both linear search and reverse operation
    vector<int> vec = {10, 20, 30, 40, 50};

    // Linear Search
    int target = 30;  // Target value to search for
    
    int index = linearSearch(vec, target);
    
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the vector." << endl;
    }

    // Reverse the vector
    cout << "Original vector: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    reverseVector(vec);  // Reverse the vector

    cout << "Reversed vector: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}

