#include <iostream>
#include<string>
#include <cmath>
using namespace std;

int main() {

/*
string food = "Pizza";
string &meal = food;

cout << food << "\n";  // Outputs Pizza
cout << meal << "\n";  // Outputs Pizza
*/

string food = "Pizza";

cout << &food; // Outputs 0x6dfed4

}