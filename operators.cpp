#include <iostream>

using namespace std;

int main()
{
    double a, b;
    
    cout << "დაწერე პირველი  რიცხვი:  ";
    cin >> a;
    
    char oper;
    cout << " მიუთითე ოპერატორი (+, -, *, /):  ";
    cin >> oper;
    
    cout << "დაწერე მეორე რიცხვი:  ";
    cin >> b;
    
    switch(oper){
        case '+':
        cout << a+b;
        break;
        case '-':
        cout << a-b;
        break;
        case '*':
        cout << a*b;
        break;
        case '/':
        cout << a/b;
        break;
    }
  
    return 0;
}
