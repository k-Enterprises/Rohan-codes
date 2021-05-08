#include <iostream>
using namespace std;
int main(){
  int a=10,b=35,c;
  char d = 'R';
  float f = 1.23;
  bool b1 = false;
  c=a+b;
  cout << c << endl;
  cout << d << endl;
  cout << f << endl;
  cout << b1 << endl;
  int sizeI = sizeof(c);
  int sizeC = sizeof(d);
  int sizeF = sizeof(f);
  int sizeB1 = sizeof(b1);
  cout << "integer " << sizeI << " character " << sizeC << " floating Point " << sizeF << " boolean " << sizeB1 << endl;
}
