#include <iostream>
using namespace std;

int main() {
    int limit;
// Ask the user to enter the limit number
    cout << "Enter a number: ";
    cin >> limit;
// loop through all numbers from 1 to the limit number
    for (int i = 1; i <= limit; i++) {
       // Check if number is divisible by 3 and 5
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } 
        // Check if number is divisible by 3 only 
        else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } 
        // Check if number is divisible by 5 only
        else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } 
        // if number is divisible by none it remains the same
        else {
            cout << i << endl;
        }
    }

    return 0;
}
