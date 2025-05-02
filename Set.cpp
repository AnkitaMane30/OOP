#include <iostream>
#include <set>
using namespace std;

int main() {
  // Create a set called cars that will store strings
  set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Print set elements
  for (string car : cars) {
    cout << car << "\n";
  }

  // Create a set called numbers that will store integers
set<int> numbers = {1, 7, 3, 2, 5, 9};

// Print set elements
for (int num : numbers) {
  cout << num << "\n";
}

// Create a set called numbers that will store integers
set<int, greater<int>> numbers = {1, 7, 3, 2, 5, 9};

// Print set elements
for (int num : numbers) {
  cout << num << "\n";
}

// Add new elements
cars.insert("Tesla");
cars.insert("VW");
cars.insert("Toyota");
cars.insert("Audi");

cout << cars.size();  // Outputs 4

// Remove elements
cars.erase("Volvo");
cars.erase("Mazda");

  // Print set elements
  for (string car : cars) {
    cout << car << "\n";
 }

  return 0;
}