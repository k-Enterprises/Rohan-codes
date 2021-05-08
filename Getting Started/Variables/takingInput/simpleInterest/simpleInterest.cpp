#include <iostream>
using namespace std;
int main(){
  float principle , rate , time , simpleInterest;
  cout << "Enter Principle ammount: ";
  cin >> principle;
  cout << "Enter Rate of Interest: ";
  cin >> rate;
  cout << "Enter the Time tenure: ";
  cin >> time;
  simpleInterest = (principle * rate * time)/100;
  cout << "The Simple Interest Is : " << simpleInterest << endl;
}
