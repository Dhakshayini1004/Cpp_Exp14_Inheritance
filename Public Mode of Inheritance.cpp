/*
Sample Output: 
Name : Dhakshayini Usha R
PRN : 24070123039
ENTC A2
*/
#include <iostream>
using namespace std;

// Base class
class Vehicle {
  public: 
    string brand = "Ford";
    void color() {
      cout << “Red! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public: 
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.color();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}

/*Output:
Red! 
Ford Mustang
*/
