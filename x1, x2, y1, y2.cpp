#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double x1, y1, x2, y2;
   cout << "შეიყვანე x1 კოორდინატი:  ";
   cin >> x1;
   cout << "შეიყვანე y1 კოორდინატი:  ";
   cin >> y1;
   cout << "შეიყვანე x2 კოორდინატი:  ";
   cin >> x2;
   cout << "შეიყვანე y2 კოორდინატი:  ";
   cin >> y2;
   
   cout << sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    return 0;
}
