#include <iostream>
using namespace std;

class Vector{
public:
Vector(int s): element{new double[s]}, sz{s} {}//construct a Vector
double& operator[](int i) {return element[i]; } //element access
int size() {return sz;}
private:
double* element; //pointer to the elements
int sz; //the number of elements
};

int main(){
Vector v(6);
cout << "The size of the vector v is: " <<  v.size() << "\n";
return 0;
}
