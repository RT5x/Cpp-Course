#include <iostream>

/*

Booleans: Types that can store a True or False state.
    - Prints True by default.
    - Occupy 8 bits in memory.
     1--> True
     0--> False


*/

int main(){
bool redlight{false};
bool greenlight{true};

std::cout << "Red light: " << redlight << std::endl;
std::cout << "Green light: " << greenlight << std::endl;
// Prints out 1 or 0

std::cout << std::boolalpha;    //Prints out True or False rather than 0 or 1
std::cout << "Red light: " << redlight << std::endl;
std::cout << "Green light: " << greenlight << std::endl;

std::cout << "------------------------" << std::endl;

if(redlight == true){
    std::cout << "STOP" << std::endl;
}else{
    std::cout << "Go Through" << std::endl;
}
// Can use logic with booleans to determine decision states.

if(greenlight == true){
    std::cout << "The light is green." << std::endl;
}else{
        std::cout << "The light is not green." << std::endl;
    }
std::cout << "------------------------" << std::endl;
// Size of boolean (Memory):
std::cout << "Size of bool: " << sizeof(greenlight) << " bytes." << std::endl;



    return 0;
}
