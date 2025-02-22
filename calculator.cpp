#include <iostream>
#include <cmath> // Include the cmath library for mathematical functions
using namespace std;

// Function to calculate the exponential of x raised to the power of y
long long eksponential(long x, long y) {
    // Base case: if y is less than or equal to 1, return x
    if (y <= 1) {
        return x;
    }
    // Recursive case: multiply x by the result of eksponensial with (y-1)
    else {
        return x * eksponensial(x, (y - 1));
    }
}

int main() {
    int option; // Variable to store the user's choice of operation
    cout << "Hello! I am a program that can perform arithmetic operations, ";
    cout << "please choose the operation you want: " << endl;
    cout << "1. addition" << endl; // Option for addition
    cout << "2. subtraction" << endl; // Option for subtraction
    cout << "3. multiplication" << endl; // Option for multiplication
    cout << "4. division" << endl; // Option for division
    cout << "5. exponential" << endl; // Option for exponential
    cout << "6. square root" << endl; // Option for square root
    cout << "Choose the number of your desired operation: ";
    cin >> option; // Read the user's choice

    // Switch statement to handle the chosen operation
    switch (option) {
        case 1: // Addition
            int a1, b1;
            cout << "Operation a + b" << endl;
            cout << "Choose value for a: ";
            cin >> a1; // Read value for a
            cout << "Choose value for b: ";
            cin >> b1; // Read value for b
            cout << "The result is: " << a1 + b1 << endl; // Output the result
            break;
        case 2: // Subtraction
            int a2, b2;
            cout << "Operation a - b" << endl;
            cout << "Choose value for a: ";
            cin >> a2; // Read value for a
            cout << "Choose value for b: ";
            cin >> b2; // Read value for b
            cout << "The result is: " << a2 - b2 << endl; // Output the result
            break;
        case 3: // Multiplication
            int a3, b3;
            cout << "Operation a x b" << endl;
            cout << "Choose value for a: ";
            cin >> a3; // Read value for a
            cout << "Choose value for b: ";
            cin >> b3; // Read value for b
            cout << "The result is: " << a3 * b3 << endl; // Output the result
            break;
        case 4: // Division
            float a4, b4;
            cout << "Operation a : b" << endl;
            cout << "Choose value for a: ";
            cin >> a4; // Read value for a
            cout << "Choose value for b: ";
            cin >> b4; // Read value for b
            cout << "The result is: " << a4 / b4 << endl; // Output the result
            break;
        case 5: // Exponential
            long a5, b5;
            cout << "Operation a raised to the power of b" << endl;
            cout << "Choose value for a: ";
            cin >> a5; // Read value for a
            cout << "Choose value for b: ";
            cin >> b5; // Read value for b
            cout << "The result is: " << eksponential(a5, b5) << endl; // Output the result using eksponential function
            break;
        case 6: // Square root
            float a6;
            cout << "Operation a square root" << endl;
            cout << "Choose value for a: ";
            cin >> a6; // Read value for a
            cout << "The result is: " << sqrt(a6) << endl; // Output the result using sqrt function
            break;
        default: // Invalid choice
            cout << "Please choose a number from 1 to 6" << endl; // Prompt for valid input
            break;
    }
    cout << " " << endl; // Print a blank line
    cout << "Thank you for using my program :>" << endl; // Thank the user
    return 0; // Return 0 to indicate successful execution
}
