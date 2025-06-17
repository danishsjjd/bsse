#include <iostream>

void reverse(char arr[], int size)
{
  int start = 0;
  int end = size - 2; // -2 because size includes null terminator
  while (start < end)
  {
    // Swap characters
    char temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

int main()
{
  // int number1 = 1;
  // int number2 = 2;

  // // Explicitly indicate we're ignoring the result
  // (void)(number1 << number2);

  // std::cout << "number1: " << number1 << std::endl;
  // std::cout << "number2: " << number2 << std::endl;

  // char a_string[20] = "This is a string very awesome";

  char hello[] = "Hello world!";
  std::cout << "Before reverse: " << hello << std::endl;
  reverse(hello, sizeof(hello));
  std::cout << "After reverse: " << hello << std::endl;

  return 0;
}