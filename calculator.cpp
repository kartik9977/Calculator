# include <iostream>
using namespace std;

int main() {

  char opt;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> opt;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(opt) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
