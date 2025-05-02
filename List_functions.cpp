#include <iostream>
#include <list>
using namespace std;

int main() {
  // Create a list called cars that will store strings
  list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Print list elements
  for (string car : cars) {
    cout << car << "\n";
  }

  // Get the first element
cout << cars.front();  // Outputs Volvo

// Get the last element
cout << cars.back();  // Outputs Mazda

// Change the value of the first element
cars.front() = "Opel";

// Change the value of the last element
cars.back() = "Toyota";

cout << cars.front(); // Now outputs Opel instead of Volvo
cout << cars.back();  // Now outputs Toyota instead of Mazda

// Add an element at the beginning
cars.push_front("Tesla");

// Add an element at the end
cars.push_back("VW");

  // Print list elements
  for (string car : cars) {
    cout << car << "\n";
  }

  cout << cars.size();  // Outputs 4


  return 0;

}