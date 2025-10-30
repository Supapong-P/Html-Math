# include <iostream>
#include <bits/stdc++.h>
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
        cout << "Error! Operator is not correct";
        result = -DBL_MAX;
        break;
    }
      if (result != -DBL_MAX)
        cout <<num1<<" " <<op <<" "<<num2<< " = " << result;
            return 0;
  }
