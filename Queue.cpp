#include<iostream>
using namespace std;

#include <queue>
int main(){
queue<string> cars;

// Add elements to the queue
cars.push("Volvo");
cars.push("BMW");
cars.push("Ford");
cars.push("Mazda");

// Access the front element (first and oldest)
cout << cars.front()<<endl;  // Outputs "Volvo"

// Access the back element (last and newest)
cout << cars.back()<<endl;  // Outputs "Mazda"

// Change the value of the front element
cars.front() = "Tesla";

// Change the value of the back element
cars.back() = "VW";

// Access the front element
cout << cars.front()<<endl;  // Now outputs "Tesla" instead of "Volvo"

// Access the back element
cout << cars.back()<<endl;  // Now outputs "VW" instead of "Mazda"

cout << cars.size()<<endl;

cout << cars.empty()<<endl; 

// Remove the front element (Volvo)
cars.pop();

// Access the front element (Now BMW)
cout << cars.front();

return 0;
}

