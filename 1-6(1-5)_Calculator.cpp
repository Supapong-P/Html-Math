# include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
  char op;
  float a, b, result;
  cout << "Enter first operands : ";
  cin >> a ;
  cout << "Enter operator: +, -, *, / , ^ : ";
  cin >> op;
  cout << "Enter second operands : ";
  cin >> b;
  if (op == '+')
        result = a + b;
    else if (op == '-')
        result = a - b;
    else if (op == '*')
        result = a * b;
    else if (op == '/')
        result = a / b;
    else if (op == '^')
        result = pow(a,b);
    else {
        cout << "Error! Operator is not correct";
        result = -DBL_MAX;
    }

      if (result != -DBL_MAX)
        cout <<a<<" " <<op <<" "<<b<< " = " << result;
            return 0;
  }
