#include <iostream>
using namespace std;
int main()
{
  int num1 , num2;
  int sum , diff , mult , modulus;
  cout << "please enter the first number\n";
  cin >> num1;
  cout <<"please enter the second number\n"; 
  cin >> num2;
  sum = num1 + num2;
    cout <<"sum =" << sum << endl;
  diff = num1 - num2;
  
    if (diff < 0 )
      cout << "diff =" << -diff << endl;
    else 
      cout << "diff =" << diff << endl;
      
  
  mult = num1 * num2;
    cout << "mult =" << mult <<endl;
  modulus = num1 % num2; 
    cout << "modulus =" << modulus <<endl;
  
    
  
    return 0;
}
