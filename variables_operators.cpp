#include <iostream>    // IO code for printing.

int main(int argc, char** argv)
{
  /*
      Q1.1: Defining variables and the int type.
   */
  std::cout << "Q1.1: Defining variables.\n";

  // Two integer values.
  int a = 102;
  int b = 201;

  std::cout << "Before swap: a = " << a << ", b = " << b << "\n";

  // TODO: Swap the values of a and b.

  std::cout << "After swap: a = " << a << ", b = " << b << "\n";

  /*
      Q1.2: Double variables and math.
   */
  std::cout << "\nQ1.2: Math.\n";

  // Two double values.
  double c = 1.5;
  double d = 10.0;
  double add, mult, div;
  // TODO: Add the values of c and d together and store the result in add.
  // TODO: Multiple the values of c and d together and store the result in mult.
  // TODO: Divide the value of d by c and store the result in div.

  std::cout << "c + d = " << add << "\n";
  std::cout << "c * d = " << mult << "\n";
  std::cout << "c / d = " << div << "\n";

  int mod;
  // TODO: Calculate the remainder of a when divided by 6 and store the result in mod.

  std::cout << "a \% 6 = " << mod << "\n";

  /*
      Q1.3: More types & combining types.
   */
  std::cout << "\nQ1.3: More types.\n";

  double mul2;
  int mul3;
  // TODO: Multiply the values of a and c and store them in double mul2.
  // TODO: Multiply the values of a and c and store them in int mul3.

  std::cout << "double mul2 = a * c = " << mul2 << "\n";
  std::cout << "int mul3 = a * c = " << mul3 << "\n";

  char e = 'e';   // Any single character.
  bool f = true;  // Can be true or false.

  int g = e;      // Setting an int to a char gives the decimal code for the char.
  char h = 81;    // Setting an int to a char gives the char corresponding to the decimal code.

  std::cout << "char e = \'" << e << "\'\n";
  std::cout << "bool f = " << f << " (0 = false, 1 = true)\n";
  std::cout << "int g = e = " << g << "\n";
  std::cout << "char h = 81 = \'" << h << "\'\n";

  char Z;
  int res1, res2;
  // TODO: Add an integer to h to make the character 'Z' and store the result in Z.
  // TODO: Combine Z with another character to give the number 26 and store the result in res1.
  // TODO: Add f to res1 to get an integer and store the result in res2.

  std::cout << "char Z = \'" << Z << "\'\n";
  std::cout << "int res1 = " << res1 << "\n";
  std::cout << "int res2 = " << res2 << "\n";

  return 0;
}
