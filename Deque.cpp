#include<iostream>
#include<deque>
using namespace std;
int main(){
	// Create a deque called cars that will store strings
deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Print deque elements
for (string car : cars) {
  cout << car << "\n";
}
// Get the first element
cout << cars[0]<<endl;  // Outputs Volvo

// Get the second element
cout << cars[1]<<endl;  // Outputs BMW

// Get the first element
cout << cars.front()<<endl;

// Get the last element
cout << cars.back()<<endl;

// Get the second element
cout << cars.at(1)<<endl;

// Get the third element
cout << cars.at(2)<<endl;

// Change the value of the first element
cars[0] = "Opel";

cout << cars[0]<<endl;  // Now outputs Opel instead of Volvo

 cout<<"Adding elment"<<endl;
  // Add an element at the beginning
  cars.push_front("Tesla");
  // Add an element at the end
  cars.push_back("VW");
  // Print list elements
  for (string car : cars) {
    cout << car << "\n";
  }
  
  cout<<"Removing elment"<<endl;
  // Remove the first element
cars.pop_front();
// Remove the last element
cars.pop_back();
// Print list elements
  for (string car : cars) {
    cout << car << "\n";
  }
cout << cars.size();

return 0;
}
