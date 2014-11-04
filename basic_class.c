#include <iostream>
using namespace std;
class Generic {
char letr;
int grd;
public:
Generic(int g) :grd{g} { if (g > 60) { letr = 'p'; } else { letr = 'f'; }}
char print() {return letr;}
};

int main (){
Generic passing = Generic(61);
Generic failing = Generic(60);
cout << "The letter of the failing grade is: " << failing.print() << "\n";
cout << "The letter of the passing grade is: " << passing.print() << "\n";
return 0;
}
