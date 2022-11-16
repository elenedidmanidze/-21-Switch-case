#include <iostream>

using namespace std;

int main()
{
    int firstNumber, secondNumber, thirdNumber;
    cout << "შეიყვანე პირველი რიცხვი:  ";
    cin >> firstNumber;
    
    cout << "შეიყვანე მეორე რიცხვი:  ";
    cin >> secondNumber;
    
    cout << "შეიყვანე მესამე რიცხვი:  ";
    cin >> thirdNumber;
    
    if(firstNumber>secondNumber && firstNumber>thirdNumber){
        cout << firstNumber;
    } else if(secondNumber>firstNumber && secondNumber>thirdNumber){
        cout << secondNumber;
    } else if(thirdNumber>firstNumber && thirdNumber>secondNumber){
        cout << thirdNumber;
    } else {
        cout << "შეიყვანე რიცხვი სწორად";
    }
    

    return 0;
}
