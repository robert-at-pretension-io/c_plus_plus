#include <iostream>
using namespace std;

struct Vector {
int size;
double* element;
};

void vector_init(Vector& v, int s){
v.element = new double[s];
v.size = s;
}

main(){

cout << "What size would you like to make the vector?\n";
int size;
cin >> size;
Vector v;
vector_init(v,size);

cout << "Enter " << v.size << " elements into the vector\n";
for (int i=0;i<v.size;i++){
cin >> v.element[i]; }
cout << "Good! Now enter a number 1 through " << v.size << ".\n";
int answer;
while(!((answer <= v.size) and (answer > 0))){
cin >> answer;
}

cout << "At that index, the vector,v, contains this element: " << v.element[answer-1] << "\n";
cout << "The sum of the numbers in the vector is: ";

double sum;
for (int i=0;i!=v.size;i++){
sum+=v.element[i];
}
cout << sum << "\n";
return 0;
}
