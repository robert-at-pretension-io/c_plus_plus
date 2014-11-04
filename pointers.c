#include <iostream>
using namespace std;

int count_x(char* p, char x){
if (p==nullptr) return 0;
int count = 0;
int length = 0;
for (;*p!=0;++p) {
if (*p==x) ++count;
++length;
}
cout << "The character '" << x << "' occurs " << count << " times in the array: ";
for(;length>0;--length,--p){ cout << p << ",";}
cout << "\n" << p << "\n";
}


main(){
char v[] = {'a','a','a','b','c','d','e',0}; //v is a vector

for (auto x : v){
cout << "x is a reference to v: " << x << "\n"; //no values are copied to x, instead x is the reference to the value in v. this is subtly different from (auto x : v) such that the current value of v is not copied to x 
x++;
}

char* p = v;
char x = 'a';
/*int count = 0;
for (; *p!=0;++p){
cout << "*p is now: " << *p << "\n";
if (*p==x){++count; cout << "count is now: "<< count << "\n";}
}*/


//cout << "The character '" << x << "' occurs " << count << " times in the array: \n";
count_x(p,x);

}
