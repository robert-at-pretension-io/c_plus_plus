#include <iostream>
using namespace std;
void copy_fct(){
int v1[10] = {0,1,2,3,4,5,6,7,8,9};
int v2[10];
for (auto i=0; i!=10; ++i){
v2[i] =v1[i];
}
cout << "The values of v2 are: ";
for (auto x : v2){
cout << x << ", ";
}
}

int main(){
copy_fct();
return 0;
}
