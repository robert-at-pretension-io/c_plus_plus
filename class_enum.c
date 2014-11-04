#include <iostream>
using namespace std;
enum class Color {red,green,blue};
enum class Traffic_Light {green,yellow,red};

Traffic_Light& operator++(Traffic_Light& t){
switch(t){
case Traffic_Light::green: return t=Traffic_Light::yellow;
case Traffic_Light::yellow: return t=Traffic_Light::red;
case Traffic_Light::red: return t=Traffic_Light::green;
}
}

char print_color(Traffic_Light& t){
switch(t){
case Traffic_Light::green: return 'g';
case Traffic_Light::yellow: return 'y';
case Traffic_Light::red: return 'r';

}
}


main(){

Traffic_Light light = Traffic_Light::red;
char color = print_color(light);
cout << "The color begins with the letter: " << color << "\n";
color = print_color(++light);

cout << "The light has changed...\nThe color now begins with the letter; " << color << "\n";
}
