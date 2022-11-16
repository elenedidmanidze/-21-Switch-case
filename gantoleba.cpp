#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double a, b, c, D, x1, x2;
   cout << "შეიყვანე a:  ";
   cin >> a;
   cout << "შეიყვანე b:  ";
   cin >> b;
   cout << "შეიყვანე c:  ";
   cin >> c;
   D=(b*b)-4*a*c;
   
   if(D>0){
   x1=(-b-sqrt(D))/(2*a);
   x2=(-b+sqrt(D))/(2*a);
   cout << x1 << " " << x2 << endl;
   } else if(D==0){
           x1=(-b-sqrt(D))/(2*a);
           cout << x1;
       } else {
           cout << "განტოლებას არ აქვს ამონახსნი ნამდვილ რიცხვთა სიმრავლიდან";
       }
  
    return 0;
}
