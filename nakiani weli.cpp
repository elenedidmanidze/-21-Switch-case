#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "შეიყვანე წელი:  ";
    cin >> year;
    
    if (year%4==0){
        cout << "ეს წელი ნაკიანია";
    } else {
        cout << "ეს წელი არ არის ნაკიანი";
    }
    return 0;
}
