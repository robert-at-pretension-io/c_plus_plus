#include <iostream>
using namespace std;
double square(double x){return x*x;}
double print_square(double x){ cout << "the square of " << x << " is " << square(x) << "\n"; return square(x); }
int main() { cout << "Please enter a value for x:\n";double x; cin >> x; int y = 10; while(y>0){ x = print_square(x); y--; } return 0;} //gosh I love precision
