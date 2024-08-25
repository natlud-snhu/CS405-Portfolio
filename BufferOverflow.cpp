// BufferOverflow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip>
#include <iostream>

#define INPUT_LENGTH 20

int main()
{
  std::cout << "Buffer Overflow Example" << std::endl;

  const std::string account_number = "CharlieBrown42";
  char user_input[INPUT_LENGTH];
  std::cout << "Enter a value: ";


  std::cin.width(INPUT_LENGTH);
  std::cin >> user_input;

  std::cout << "You entered: " << user_input << std::endl;
  std::cout << "Account Number = " << account_number << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
