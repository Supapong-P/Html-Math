# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2, result;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter first operands : ";
  cin >> num1 ;
  cout << "Enter second operands : ";
  cin >> num2;

  switch(op) {

    case '+':
      result = num1 + num2;
      break;

    case '-':
      result = num1 - num2;
      break;

    case '*':
      result = num1 * num2;
      break;

    case '/':
      result = num1 / num2;;
      break;
    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }
  cout << num1 << " " << op << " " << num2 <<" = "<< result;

  return 0;
}
