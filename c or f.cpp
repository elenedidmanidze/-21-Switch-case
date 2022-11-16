#include <iostream>

using namespace std;

int main()
{
    char temp;
    cout << "შეიყვანეთ ტემპერატურის საზომი ერთეული C ან F:  ";
    cin >> temp;
    
    float number;
    cout << "შეიყვანეთ მნიშვნელობა:  ";
    cin >> number;
    
   if((temp == 'c')||(temp == 'C')){
      cout << "F (ფარენჰეიტი) ტოლია:  " << number*1.8+32;
    } else if((temp == 'f')||(temp == 'F')){
       cout << "C (ცელსიუსი) ტოლია:  " <<(number-32)/1.8;
    } else { 
       cout << "შეიყვანე მონაცემები სწორად";
    }
    return 0;
}
