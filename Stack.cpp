#include<iostream>
using namespace std;

#include <stack>
int main() {
  // Create a stack of strings called cars
  stack<string> cars;

  // Add elements to the stack
  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");
  cars.push("Mazda");
  
  // Access the top element
  cout << cars.top()<<endl;
  
  // Change the value of the top element
cars.top() = "Tesla";

 // Access the top element
cout << cars.top()<<endl;  // Now outputs "Tesla" instead of "Mazda"

// Remove the last added element 
cars.pop();

// Access the top element 
cout << cars.top()<<endl;

cout << cars.size()<<endl;

cout << cars.empty(); 
  return 0;
}

