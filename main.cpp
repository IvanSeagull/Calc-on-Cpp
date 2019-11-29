#include <iostream>

using namespace  std;

int main(){
    int num_1, num_2, res;
    char op;
    cout << "Enter first number     ";
    cin >> num_1;
    cout << "Operation      ";
    cin >> op;
    cout << "Enter second number    ";
    cin >> num_2;
    switch (op) {
    case '+':
        res=num_1+num_2;
        break;
    case '-':
        res=num_1-num_2;
        break;
    case '*':
        res= num_1 * num_2;
        break;
    case '/':
        res = num_1 / num_2;
        break;
    default:
        cout << "Unknown symbol";
        break;
    }
    cout << "Answer is " << res;
  }

