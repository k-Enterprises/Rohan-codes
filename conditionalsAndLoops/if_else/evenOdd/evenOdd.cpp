#include <iostream>
using namespace std;
int main(){
  int n;
  cout << "Enter any number : ";
  cin >> n;
  if(n == 0){
    cout << "Its a ZERO it neither even nor odd" << endl;
  }else if (n % 2 == 0){
    cout << "The number is even" << endl;
	
  }else{
    cout << "The number is odd" << endl;
  }
}
