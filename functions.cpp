#include <iostream>

// Example: Function that performs this mathematical function:
//    f(x) = x^2 + 5x + 2
float f(float x) {
  float result;               // Create a variable that stores
                              // the result
  result = x * x + 5 * x + 2; // Compute f(x)
  return result;              // Send the result back
}

// Q3.1: Fill in this function to compute the following function:
//    g(x) = (x - 1)^2
float g(float x) {
  return 0;
}

// Q3.2: Fill in this function that returns true if the number is even
// and false is the number is odd
bool isEven(int n) {
  return false;
}

// Q3.3: Write a function that gets the absolute value of an integer.
// Do not use the abs() function from the cmath library.
int absoluteVal(int x) {
  return 0; // edit this line!
}

// Q3.4: Write a function that checks if a number is prime and
// returns true or false. Name the function isPrime and have it
// take an integer input.


// Q3.5: Fix me! This function should accept an integer num, passed
// by value, and return a value that is one bigger than num. Modify
// the function declaration and / or body to accomplish this.
void increment(int num) {
  num = num + 1;
}

// Q3.6: Fix me! This function should accept an integer num, passed
// by reference, and modify its value to be one smaller than num. Modify
// the function declaration and / or body to accomplish this.
void decrement(int num) {
  num - 1;
}


int main() {
  std::cout << "Example function:\n";
  //Example 1: Print f(x);
  float x = 2.5;
  float result = f(x);
  std::cout << "f(" << x << ") = " << result << "\n";

  std::cout << "\nQ3.1: Computing a function\n";
  // Q3.1: Fill in the function "g" above. Ask the user for a floating point
  // number and store it in y. Then, print the result of g(y).
  float y;

  std::cout << "\nQ3.2: Even or odd?\n";
  // Q3.2: Fill in the function "isEven" above. Ask the user for an integer
  // number and store it in z. Then, use the function isEven to print a
  // message saying whether the number was even or odd.
  int z;

  std::cout << "\nQ3.3: Absolute value\n";
  // Q3.3: Fill in the function "absoluteVal" above to compute and return
  // the absolute value of an integer.
  std::cout << "absoluteVal(-330) = " << absoluteVal(-330) << "\n";
  std::cout << "absoluteVal(102) = " << absoluteVal(102) << "\n";

  std::cout << "\nQ3.4: Prime numbers\n";
  // Q3.4: Write a function that checks if a number is prime and
  // returns true or false. Name the function isPrime and have it
  // take an integer input.
  // Print out all numbers from 1-20 that are prime using your
  // isPrime function.

  std::cout << "\nQ3.5: Passing by value\n";
  // Q3.5: The function "increment" should take in an int by value and
  // increment it.
  int i = 2;
  std::cout << "Original value: i = " << i << "\n";
  // TODO: With the code as is, i is not incremented. Fix function increment
  // so that i is passed by value and the incremented value is returned.
  increment(i);  // Fix me! Change this line so that i is incremented.
  std::cout << "Increment: i = " << i << "\n";

  std::cout << "\nQ3.6: Passing by reference\n";
  // Q3.6: The function "decrement" should change the value of an int to
  // the original value minus 1. Fix function decrement so that i is passed
  // by reference and modified with the decremented value.
  decrement(i);  // Does this line need to change?
  std::cout << "Decrement: i = " << i << "\n";

  std::cout << "\nQ3.7: Incrementing numbers\n";
  // Q3.7: The following code segment should print the numbers 100-109,
  // but something is wrong. Identify what is wrong and edit
  // one line to fix it.
  int num = 100;
  for(int k = 0; k < 10; k++) {
    std::cout << num << " ";
    increment(num);
  }
  std::cout << "\n";
}
