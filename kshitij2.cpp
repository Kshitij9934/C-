#include <iostream>
using namespace std;

int globalvar = 100; // Global variable

int main() {
int localvar = 50; // Local variable

if (true) {
int blockVar = 30; // Block variable
cout << "Block variable : " << blockVar << endl;
}
// cout << blockvar; // Error: blockvar outof scope

cout << "Global : " << globalvar << endl;
cout << "Local: " << localvar << endl;

return 0;
}
