#include <iostream>
using namespace std;
int main(){
  int a, b;
  cout << "Enter Two Numbers: " << endl;
  cin >> a >> b;
  if (a == b){
    cout << "Hey these are equal" << endl;
  }else if (a > b){
    cout << "the first number is greater than the second one" << endl;
  }else{
    cout << "the second number is greter than the first one" << endl;
  }
}
