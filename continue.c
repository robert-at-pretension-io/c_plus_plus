#include <iostream>
bool accept(){
std::cout << "Would you like to continue? (y/n)\n";
char answer;

while (answer != 'y' or answer != 'n'){

std::cin >> answer;

switch(answer){
case 'y':
std::cout << "Sweet, We thought you'd want to.. You've come this far after all\n";
return true;
case 'n':
std::cout << "That's too bad, you seemed so eager.\n";
return false;
default:
std::cout << "You entered: " << answer << "\nPlease enter y or n\n";
}
}
}
main(){
accept();
return 0;
}

