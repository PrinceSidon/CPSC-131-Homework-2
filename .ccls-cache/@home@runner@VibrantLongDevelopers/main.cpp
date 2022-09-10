#include <iostream>
#include "vector131.hpp"
#include "vector131.cpp"
using namespace std;

int main() {
  //Tests out the constructor
  vector131<int> v(5);
  v.set(0, 1);
  v.set(1, 2);
  v.set(2, 3);
  v.set(3, 4);
  v.set(4, 5);

  //Tests out the print function
  cout << "This is a dynamic array" << endl;
  v.print();
  cout << endl;

  //Tests out the getLength function
  cout << "The length of this dynamic array is: " << v.getLength() << endl;
  cout << endl;

  //Tests out the get function
  cout << "The value at index 2 is currently: " << v.get(2) << endl;
  cout << endl;

  //Tests out the set function
  v.set(2, 33);
  v.print();
  cout << "Now the value at index 2 is: " << v.get(2) << endl;
  cout << endl;

  //Tests out the resize function
  v.resize(7);
  v.set(5, 6);
  v.set(6, 7);
  v.print();
  cout << "The dynamic array's length is now: " << v.getLength() << endl;
  cout << endl;

  //Tests out the push_back function
  v.push_back(8);
  v.print();
  cout << v.get(v.getLength() - 1) << " has been added to the end of the array" << endl;
  cout << endl;

  //Tests out the push_front function
  v.push_front(0);
  v.print();
  cout << v.get(0) << " has been added to the front of the array" << endl;
  cout << endl;

  //Tests out the insert function
  v.insert(2, 99);
  v.print();
  cout << v.get(2) << " has been added at index 2 of the array" << endl;
  cout << endl;

  //Tests out the remove function
  v.remove(2);
  v.print();
  cout << "Now the value has been removed" << endl;
  
  return 0;
}