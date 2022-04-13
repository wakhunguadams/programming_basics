# include <iostream>
using namespace std;

int main() {

  char op;
  float a, b;
  
  cout<<"Enter the operands you wish to calculate:";
  cin>>a>>b;

  cout << "Enter a desired operation (operators: +, -, *, /): ";
  cin >> op;

  switch(op) {

    case '+':
      cout << a << " + " << b << " = " << a + b;
      break;

    case '-':
      cout << a << " - " << b << " = " << a - b;
      break;

    case '*':
      cout << a << " * " << b << " = " << a * b;
      break;

    case '/':
      cout << a << " / " << b << " = " << a / b;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}