#include <iostream>
#include <vector> //This statement is super important! It makes sure we have access to the vector type.

/*
  Hi! This lesson is focuses on understanding how to create vectors,
  access different elements, and using vector properties.

  Vectors are a data structure used to store multiple variables with
  the same datatype. Vectors are powerful because their size is
  dynamic. This means that they can change size automatically to fit
  the number of elements you want to store.
 */

int main() {

  //---------------------------- PART 1 ----------------------------
  std::cout << "Part 1: Initializing Vectors.\n\n";
  /**
    To initialize (create) a vector of a certain type of variable,
    you follow the following format:

      std::vector<TYPE_OF_VARIABLE> myVector;

    Here is an example of a vector that stores integer values:
   **/
  std::vector<int> vectorOne;

  // Initially, this vector will have zero elements. To get the size
  // of a vector, you can do: myVector.size(). This next line should
  // print out zero, since the vector is empty.
  std::cout << "Size of vectorOne: " << vectorOne.size() << "\n";

  // To add an element to a vector, you can use the .push_back()
  // function! This function will add a new value to the end of
  // the vector.
  vectorOne.push_back(911);  // vectorOne = [911]
  vectorOne.push_back(815);  // vectorOne = [911,815]

  // TODO: Print out the size of vectorOne after adding these
  // elements. It should now have size 2.
  std::cout << "Size of vectorOne after push_back: " << vectorOne.size() << "\n";

  /*
    Remember! You can only add elements that are the same type
    as the variable type you specified when you created the vector.

    If you want to add elements at the same time as initializing
    the vector, you can do the following:
   */
  std::vector<int> vectorTwo{10, 20, 30};  // vectorTwo = [10,20,30]
  // TODO: Modify this line to print out the size of vectorTwo after initializing.
  std::cout << "Size of vectorTwo: " << 0 << "\n";

  /*
    In C++, you can also easily create a vector of a specific size
    filled with all the same number, using:

      std::vector<TYPE_OF_VARIABLE> myVector(SIZE, VALUE);
   */
  std::vector<int> vectorThree(4, 1234); // vectorThree = [1234,1234,1234,1234]
  // TODO: Modify this line to print out the size of vectorTwo after initializing.
  std::cout << "Size of vectorThree: " << 0 << "\n";

  // Question 1.1: Create a vector of ints with the elements
  // (1,2,3,4,5) by using push_back, and print out its size.


  // Question 1.2: Create a vector with the elements {1,3,5,7} in
  // one line and print out its size.

  // Question 1.2: Create a vector with a size of 100, all filled
  // with the number 3 and print out itse size.

  //---------------------------- PART 2 ----------------------------
  std::cout << "\nPart 2: Accessing Vector Elements.\n\n";
  /*How can we access an element in a vector? We can follow the format:

      vectorName[i] to get the ith element in a vector called vectorName.

  Remember! Counting in C++ starts at 0, so the first element in the array
  is actually the 0th element. Here's an example:
    */

  std::vector<int> demo{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  // To access element 10, which is the 0th element, I can do the following:
  std::cout << "demo[0] = " << demo[0] << "\n";

  // Question 2.1 - Print the element with value 90.

  // Question 2.2 - Add a new integer with value 110 to the end of the vector
  // demo and print it.
  // Hint: you'll need to add a line of code before the print statement

  // Question 2.3 - Print out every element of vector tomato by modifying
  // this for loop:
  std::vector<int> tomato{14, 7, 0, -7};
  std::cout << "\nQuestion 2.3! Values in tomato:\n";

  for (int i = 0; i < 2; i++) { // This will go through the indices 0,1,2,3
  }

  // Question 2.4 - Use .size() and a for-loop to print each element
  // of the vector demo.
  std::cout << "\nQuestion 2.4! Values in demo:\n";

  //---------------------------- PART 3 ----------------------------
  std::cout << "\nPart 3: Modifying Vectors.\n";
  /* Now, let's do some practice modifying vectors. */

  // EXAMPLE
  std::vector<std::string> food{"tomato", "pizza", "sauce"};
  std::cout << "Part 3 - Vector food BEFORE modifying \n";
  for (int i = 0; i < food.size(); i++) {
    std::cout << "The " << i << "th element is" << food[i] << "\n";
  }

  // Now, change each value of the vector.
  food[0] = "hotdog";
  food[1] = "taco";
  food[2] = "sandwich";

  std::cout << "\nPart 3 - Vector food AFTER modifying \n";
  for (int i = 0; i < food.size(); i++) {
    std::cout << "The " << i << "th element is " << food[i] << "\n";
  }

  std::cout << "\nQuestion 3.1: Modifying odds\n\n";
  std::vector<int> oddChange{1, 3, 12, 3, 4, 6, 7, 8, 9};
  // Question 3.1 - Create a loop that will replace each odd
  // number in the vector oddChange with the number 0, and then print each element.

  std::cout << "\nQuestion 3.2: Modyfing evens\n\n";
  std::vector<int> evenChange{1, 3, 12, 3, 4, 6, 7, 8, 9};
  // Question 3.2 - Create a loop that will double each even
  // number in the vector evenChange, and then print each element.

  //---------------------------- PART 4 ----------------------------
  std::cout << "\nPart 4: Deleting Vector Elements.\n\n";
  /* Just like push_back, we can delete elements with pop_back() */

  // EXAMPLE:

  std::vector<int> exampleFour{1, 3, 3, 3, 4, 6, 7, 8, 9};
  std::cout << "Size of exampleFour before pop_back: " << exampleFour.size() << "\n";
  // Now we remove the last element.
  exampleFour.pop_back(); // {1, 3, 3, 3, 4, 6, 7, 8} //size = 8
  std::cout << "Size of exampleFour after pop_back: " << exampleFour.size() << "\n";

  // Question 4.1
  std::cout << "\nQuestion 4.1: Clearing a vector\n\n";
  std::vector<int> fourOne{1, 4, 6, 7, 9};
  std::cout << "Size of exampleFour: " << exampleFour.size() << "\n";
  // TODO: Delete all of the elements in fourOne one at a time with a loop.

  std::cout << "Size of exampleFour after delete: " << exampleFour.size() << "\n";
}
