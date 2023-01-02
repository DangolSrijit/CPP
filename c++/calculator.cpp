#include <iostream>

using namespace std;

int main() {
  double num1, num2;
  char operation;
  
  cout << "Enter the first number: ";
  cin >> num1;
  
  cout << "Enter the second number: ";
  cin >> num2;
  
  cout << "Enter the operation (+, -, *, /): ";
  cin >> operation;
  
  if (operation == '+') {
    cout << num1 + num2;
  } else if (operation == '-') {
    cout << num1 - num2;
  } else if (operation == '*') {
    cout << num1 * num2;
  } else if (operation == '/') {
    cout << num1 / num2;
  } else {
    cout << "Invalid operator";
  }
  
  return 0;
}
