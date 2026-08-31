#include <iostream>
#include <string>

// Assignment 1 — Jaylen Chae
using std::cout;
using std::cin;
using std::string;

int main() {
  string name, food;
  int pets = 0;
  cout << "First name: ";
  cin >> name;
  cout << "How many pets: ";
  cin >> pets;
  cout << "Favorite food: ";
  cin >> food;

 
 
  cout << name << " favorite food is(" << food << ")\n";
  cout << name << " has about " << pets << " pets at home!\n";
 
  return 0;
}
